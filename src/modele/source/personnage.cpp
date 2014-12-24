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
#include <list>
// ###########################

// Code source du constructeur
Personnage::Personnage() : vie(0)
{
	// Allocation liste
	cibles = std::list<Personnage*>();
}

Personnage::Personnage(int vie) : vie(vie)
{
	// Allocation liste
	cibles = std::list<Personnage*>();
}

// Code source du destructeur par défaut
Personnage::~Personnage()
{
	// On vide la liste de cibles
	this->cibles.clear();
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
		// Itérateur de parcours de liste
		std::list<Personnage*>::iterator i;

		// Parcours de toutes les cibles pour les endommager
		for(i = cibles.begin(); i != cibles.end(); i++)
		{
			// On récupère la cible et on la blesse
			Personnage* cible = *i;
			cible->baisserVie(attaque.getDegats());
		}
	}
}

// source ajouterCible
void Personnage::ajouterCible(Personnage* personnage)
{
	this->cibles.push_back(personnage);
}

void Personnage::retirerCible(Personnage* personnage)
{
	// Pas de suppression effectuée
	bool suppression = false;

	// S'il y a des cibles on fait quelque chose
	if(!cibles.empty())
	{
		// Itérateur de parcours de liste
		std::list<Personnage*>::iterator i = cibles.begin();

		// Parcours de la liste jusqu'à suppression
		while(!suppression && i != cibles.end())
		{
			// On regarde si le personnage à la
			// position dans la liste est celui à suppr
			Personnage* perso = *i;
			if(perso->equals(*personnage))
			{
				cibles.erase(i);
				suppression = true;
			}
			
			i++;
		}
	}
}

// Source equals
bool Personnage::equals(Personnage personnage)
{
	// Comparaison sur l'identifiant
	if(personnage.getId() == this->id)
		return true;

	return false;
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

// Source getter id
int Personnage::getId()
{
	return id;
}

// Source setter id
void Personnage::setId(int id)
{
	this->id = id;
}
