/**
* \file		personnage.h
* \brief	Définition de l'objet Personnage
* \author	Tendry
* \date		25 Décembre 2014
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
* \version	2.0
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
		* \param	id l'identifiant du personnage
		* \param	vie la vie attribuée
		* \author	Tendry
		*/
		Personnage(int id, int vie);

		/**
		* \brief	destructeur par défaut
		*/
		virtual ~Personnage();

		/**
		* \brief	baisse le nombre de points de vie du personnage
					assure le reste à 0 si les dégâts sont trop importants
		* \author	Tendry
		* \version	1.0
		* \param	attaque l'attaque qui baisse la vie
		*/
		virtual void baisserVie(Attaque attaque);

		/**
		* \brief	le personnage, s'il a des cibles il les blesse
					sinon il attaque dans le vent
		* \author	Tendry
		* \version	1.0
		* \details	attaque les cibles qui sont les attributs du personnage
		*/
		void attaquer();

		/**
		* \brief	ajoute une cible a portée de notre personnage
		* \author	Tendry
		* \version	1.0
		* \param	personnage le pointeur vers la cible
		*/
		void ajouterCible(Personnage* personnage);

		/**
		* \brief	Retire une cible de la liste des cibles du personnage
		* \author	Tendry
		* \version	1.0
		* \param	personnage le personnage à supprimer	
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

		/**
		* \brief	copie le personnage courant
		* \author	Tendry
		* \version	1.0
		* \param 	new_id le nouvel identifiant de la nouvelle instance
		* \return 	la copie du personnage courant (nouvelle instance)
		*/
		virtual Personnage* copie(int new_id);

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

		/**
		* \brief	getter de l'attaque courante
		* \return 	pointeur vers l'attaque courante
		* \author	Tendry
		*/
		Attaque* getAttaque();

		/**
		* \brief 	setter de l'attaque courante
		* \author	Tendry
		* \param	attaque la nouvelle attaque
		*/
		void setAttaque(Attaque attaque);

	protected:

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

		/**
		* \brief	l'attaque qu'effectue le personnage
		*/
		Attaque* attaque;
};

#endif