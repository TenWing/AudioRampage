/**
* \file		cible.cpp
* \brief	code source du module "Modele" du MVC
* \author	Tendry
* \date		29 Décembre 2014
*/

// ###########################
// INCLUSIONS
#include <cible.h>
// ###########################

// Source constructeur
Cible::Cible() : valeur(0)
{

}

// Source constructeur réel
Cible::Cible(Personnage* personnage) : valeur(personnage)
{

}

// Source destrcuteur
Cible::~Cible()
{

}

// Source getter
Personnage* Cible::getValeur()
{
	return valeur;
}