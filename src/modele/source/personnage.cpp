/**
* \file		personnage.cpp
* \brief	Code source de la classe personnage
* \author	Tendry
* \date		20 Décembre 2014
*/

// ###########################
// INCLUSIONS
#include <personnage.h>
// ###########################

// Code source du constructeur
Personnage::Personnage() : vie(3)
{
	// par défaut la vie = 3 (cas IA)
}

// Code source du destructeur par défaut
Personnage::~Personnage()
{
	// Rien
}

// Code source du getter vie
int Personnage::getVie()
{
	return vie;
}

// Code source du setter vie
void Personnage::setVie(int vie)
{
	this->vie = vie;
}