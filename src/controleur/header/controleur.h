/**
* \file		controleur.h
* \brief	header du module "Contrôle" du MVC
* \author	Tendry
* \date		20 Décembre 2014
*/

#ifndef CONTROLEUR_H
#define CONTROLEUR_H

// ############################
// INCLUSIONS
#include <modele.h>
// ############################

/**
* \brief	le contrôleur du MVC, possède le modèle et la vue
* \author	Tendry
* \version	1.0
*/
class Controleur
{	
	public:
		
		/**
		* \brief	Constructeur par défaut
		*/
		Controleur();

		/**
		* \brief	Destructeur par défaut
		*/
		~Controleur();

	private:

		/**
		* \brief la partie modèle de l'application
		*/
		Modele modele;
};


#endif