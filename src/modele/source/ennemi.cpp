/**
* \file		ennemi.cpp
* \brief	Code source de la classe ennemi
* \author	Tendry
* \date		25 Décembre 2014
*/

// ###########################
// INCLUSIONS
#include <iostream>
#include <ennemi.h>
// ###########################

// Source constructeur par défaut
Ennemi::Ennemi() : Personnage()
{

}

// Source constructeur parametré
Ennemi::Ennemi(int id, int vie, Type type) : Personnage(id, vie), type(type)
{

}

// Source destructeur d'objet
Ennemi::~Ennemi()
{
	
}

// Source baisser vie redéfinie
void Ennemi::baisserVie(Attaque attaque)
{
	// Si les types sont égaux ou dégâts mélee
	if(attaque.getType() == this->type
		|| attaque.getType() == MELEE)
	{
		// On inflige les dégats normalement
		Personnage::baisserVie(attaque);
	}
}

// Source getter type
Type Ennemi::getType()
{
	return type;
}

// Source setter type
void Ennemi::setType(Type type)
{
	this->type = type;
}