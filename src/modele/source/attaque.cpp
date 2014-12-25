/**
* \file		attaque.cpp
* \brief	Code source de la classe attaque
* \author	Tendry
* \date		21 Décembre 2014
*/

// ###########################
// INCLUSIONS
#include <attaque.h>
#include <type.h>
// ###########################

// Source du constructeur par défaut
Attaque::Attaque() : type(MELEE), degats(0)
{

}

// Source du constructeur paramétré
Attaque::Attaque(Type type, int degats) : type(type), degats(degats)
{

}

// Source du destructeur par défaut
Attaque::~Attaque()
{

}

// Source du comparateur
bool Attaque::equals(Attaque attaque)
{
	if(attaque.type == this->type 
		&& attaque.degats == this->degats)
		return true;

	return false;
}

// Source de l'accesseur au type
Type Attaque::getType()
{
	return type;
}

// Source de l'accesseur au degats
int Attaque::getDegats()
{
	return degats;
}

// Source du setter de type
void Attaque::setType(Type type)
{
	this->type = type;
}

// Source du setter de degats
void Attaque::setDegats(int degats)
{
	this->degats = degats;
}