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
#include <joueur.h>
#include <score.h>
#include <ennemi.h>
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
		virtual ~Modele();

		/**
		* \brief	crée un ennemi dans la partie
					en se basant sur un modele choisit
					au hasard
		* \author	Tendry
		*/
		void apparitionEnnemi();

		// Fonction pertinentes
		// #########################################
		// GETTERS / SETTERS

		/**
		* \brief 	getter base_id
		* \return 	le base_id du modèle
		* \details 	a appeler à chaque accès car 
					s'occupe de changer la valeur de base_id
		*/
		int getBase_id();

		/**
		* \brief	getter du score
		* \return 	le score du modele
		*/
		Score getScore();

		/**
		* \brief	setter du score
		* \param 	score le nouveau score
		*/
		void setScore(Score score);

		/**
		* \brief 	getter de la liste des ennemis en jeu
		* \return 	l'attribut ennemi du modele
		*/
		std::list<Ennemi*> getEnnemis();

		/**
		* \brief 	getter du joueur de la partie
		* \return 	le joueur du modèle
		*/
		Joueur getJoueur();

		/**
		* \brief 	getter d la liste des modeles d'ennemis
		* \return 	un vecteur d'Ennemi
		*/
		std::vector<Ennemi*> getModelesEnnemi();

	private:

		/**
		* \brief	attribut qui donnes les ID
					aux personnages créés
		*/
		int base_id;

		/**
		* \brief	le score de la partie
		*/
		Score score;

		/**
		* \brief	l'ensemble des NPC ennemis
					en jeu
		*/
		std::list<Ennemi*> ennemis;

		/**
		* \brief	le joueur de la partie
		*/
		Joueur joueur;

		/**
		* \brief	une collection de tous les modèles
					d'ennemis possible de générer
		*/
		std::vector<Ennemi*> modelesEnnemi;
};

#endif