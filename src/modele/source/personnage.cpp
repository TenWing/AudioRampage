/**
* \file		personnage.cpp
* \brief	Code source de la classe personnage
* \author	Tendry
* \date		20 Décembre 2014
*/

// ###########################
// INCLUSIONS
#include <personnage.h>
#include <attaque.h>
#include <vector>
// ###########################

// Code source du constructeur
Personnage::Personnage() : vie(0)
{
	// Allocation du vecteur
	cibles = std::vector<Personnage*>();
}

Personnage::Personnage(int vie) : vie(vie)
{
	// Allocation du vecteur
	cibles = std::vector<Personnage*>();
}

// Code source du destructeur par défaut
Personnage::~Personnage()
{
	// Rien
}

// Source de baisserVie
void Personnage::baisserVie(int quantite)
{
	this->vie -= quantite;

	if(this->vie < 0)
		this->vie = 0;
}

// Source d'une attaque d'un personnage
void Personnage::attaquer(Attaque attaque)
{
	// S'il y a des cibles on fait quelque chose
	if(!cibles.empty())
	{
		// Parcours de toutes les cibles pour les endommager
		for(unsigned int i = 0; i < cibles.size(); i++)
		{
			// On récupère la cible et on la blesse
			Personnage* cible = cibles[i];
			cible->baisserVie(attaque.getDegats());
		}
	}
}

// source ajouterCible
void Personnage::ajouterCible(Personnage* personnage)
{
	this->cibles.push_back(personnage);
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