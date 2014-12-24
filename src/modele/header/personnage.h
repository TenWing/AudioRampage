/**
* \file		personnage.h
* \brief	Définition de l'objet Personnage
* \author	Tendry
* \date		20 Décembre 2014
*/

#ifndef PERSONNAGE_H
#define PERSONNAGE_H

// ###################################
// INCLUSIONS
#include <list>
#include <attaque.h>
// ###################################

/**
* \brief	un personnage dans le jeu peut être ou le joueur
			ou un bot qui attaque le joueur
* \author	Tendry
* \version	1.0
*/
class Personnage
{
	public:

		/**
		* \brief 	constructeur par défaut
		*/
		Personnage();

		/**
		* \brief 	construit un personage et lui définit une vie
		* \param	vie la vie attribuée
		* \author	Tendry
		*/
		Personnage(int vie);

		/**
		* \brief	destructeur par défaut
		*/
		~Personnage();

		/**
		* \brief	baisse le nombre de points de vie du personnage
					assure le reste à 0 si les dégâts sont trop importants
		* \author	Tendry
		* \version	1.0
		* \param	quantite la quantité de vie baissée
		*/
		void baisserVie(int quantite);

		/**
		* \brief	le personnage, s'il a des cibles il les blesse
					sinon il attaque dans le vent
		* \author	Tendry
		* \version	1.0
		* \param	attaque l'attaque effectuée sur les cibles
		* \details	attaque les cibles qui sont les attributs du personnage
		*/
		void attaquer(Attaque attaque);

		/**
		* \brief	ajoute une cible a portée de notre personnage
		* \author	Tendry
		* \version	1.0
		* \param	personnage le pointeur vers la cible
		*/
		void ajouterCible(Personnage* personnage);

		/**
		* \brief	
		*/
		void retirerCible(Personnage* personnage);

		/**
		* \brief	indique si deux personnage sont égaux
		* \author	Tendry
		* \version	1.0
		* \param	personnage l'autre personnage testé
		* \return 	vrai si égaux, faux sinon
		*/
		bool equals(Personnage personnage);

		// Fonction pertinentes
		// #########################################
		// GETTERS / SETTERS

		/**
		* \brief	retourne la vie du personnage
		* \return 	la vie du personnage
		* \author	Tendry
		*/
		int getVie();

		/**
		* \brief	Change la vie du personnage
		* \param	vie la nouvelle vie du personnage
		* \author	Tendry
		*/
		void setVie(int vie);

		/**
		* \brief	retourne l'identifiant du personnage
		* \author	Tendry
		* \return 	l'identifiant du personnage
		*/
		int getId();

		/**
		* \brief 	ATTENTION usage dangereux, modifie l'id du
					personnage
		* \author	Tendry
		* \param	id le nouvel identifiant
		*/
		void setId(int id);

	private:

		/**
		* \brief	l'identifiant de l'objet
		*/
		int id;

		/**
		* \brief 	la santé du personnage
		*/
		int vie;

		/**
		* \brief 	une liste de cibles pour les attaques
		* \details	une liste est plus adaptée dans le cas
					d'une suppression ou insertion en milieu de 
					séquence, ce qui peut arriver car on ne sait
					pas globalement la position des personnages
					qui meurent ou sortent de la portée du personnage
					dans la liste.
		*/
		std::list<Personnage*> cibles;
};

#endif