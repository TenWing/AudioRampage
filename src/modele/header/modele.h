/**
* \file		modele.h
* \brief	header du module "Modèle" du MVC
* \author	Tendry
* \date		20 Décembre 2014
*/

#ifndef MODELE_H
#define MODELE_H

// ############################
// INCLUSIONS
#include <joueur>
#include <personnage>
#include <score>
#include <list>
#include <vector>
// ############################

/**
* \brief	le modèle du MVC, effectue tous les traitements
			complexes et possède aussi toutes les données
			du programmes
* \author	Tendry
* \version	1.0
*/
class Modele
{	
	public:
		
		/**
		* \brief	Constructeur par défaut
		*/
		Modele();

		/**
		* \brief	Destructeur par défaut
		*/
		~Modele();

	private:

		/**
		* \brief	le score de la partie
		*/
		Score score;

		/**
		* \brief	l'ensemble des NPC ennemis
					en jeu
		*/
		std::list<Ennemi> ennemis;

		/**
		* \brief	le joueur de la partie
		*/
		Joueur joueur;

		/**
		* \brief	une collection de tous les modèles
					d'ennemis possible de générer
		*/
		std::vector<Ennemi> modelesEnnemi;
};

#endif