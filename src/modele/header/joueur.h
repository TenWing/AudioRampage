/**
* \file		joueur.h
* \brief	Définition de l'objet Joueur
* \author	Tendry
* \date		20 Décembre 2014
*/

#ifndef JOUEUR_H
#define JOUEUR_H

// ###################################
// INCLUSIONS
#include <personnage.h>
#include <vector>
// ###################################

/**
* \brief	Un joueur est un personnage spécifique
* \author 	Tendry
* \version	1.0
* \see 		Personnage
*/
class Joueur : public Personnage
{
	public:

		/**
		* \brief	Constructeur par défaut du joueur
		*/
		Joueur();

		/**
		* \brief	Construit un joueur avec sa vie et son ID
		* \author 	Tendry
		* \param	id l'identifiant du personnage
		* \param	vie la vie du personnage
		*/
		Joueur(int id, int vie);

		/**
		* \brief	Destructeur du joueur
		*/
		virtual ~Joueur();

		/**
		* \brief	Change d'attaque en passant à l'attaque suivante
		* \author	Tendry
		*/
		void attaqueSuivante();

		/**
		* \brief	Change d'attaque en passant à l'attaque précédente
		* \author	Tendry
		*/
		void attaquePrecedente();

		// Fonction pertinentes
		// #########################################
		// GETTERS / SETTERS

		/**
		* \brief	getter des attaques
		* \return	un vecteur d'attaque
		* \author	Tendry
		*/
		std::vector<Attaque*> getAttaques();

		/**
		* \brief	setter des attaques
		* \param	attaques la nouvelle liste d'attaques
		* \author	Tendry
		*/
		void setAttaques(std::vector<Attaque*> attaques);

	private:

		/**
		* \brief	indique la position où se trouve l'attaque
					courante parmi la liste des attaques
					du joueur
		* \author	Tendry
		* \return 	un iterateur corréspondant au conteneur
					à la position de l'attaque courante
					dans la liste
		*/
		std::vector<Attaque*>::iterator positionAttaque();

		/**
		* \brief	une liste d'attaques possibles
		* \details	le joueur contrairement aux autres personnages
					possède plusieures attaques et peut en changer
					cette-fois ci on choisit un vecteur car pas de 
					suppression en milieu de séquence
		*/
		std::vector<Attaque*> attaques;
};

#endif