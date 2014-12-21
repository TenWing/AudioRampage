/**
* \file		attaque.cpp
* \brief	Code source de la classe attaque
* \author	Tendry
* \date		21 Décembre 2014
*/

// ###########################
// INCLUSIONS
#include <attaque.h>
// ###########################

// Source du constructeur par défaut
Attaque::Attaque()
{

}

// Source du destructeur par défaut
Attaque::~Attaque()
{

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