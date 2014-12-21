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
#include <personnage.h>
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
};


#endif