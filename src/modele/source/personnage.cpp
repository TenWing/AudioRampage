/**
* \file		personnage.cpp
* \brief	Code source de la classe personnage
* \author	Tendry
* \date		20 Décembre 2014
*/

// ###########################
// INCLUSIONS
#include <iostream>
#include <personnage.h>
#include <attaque.h>
#include <list>
// ###########################

// Code source du constructeur
Personnage::Personnage() : id(-1), vie(0), attaque(0)
{
	// Allocation liste
	cibles = std::list<Personnage*>();
}

// Source contstructeur parametré
Personnage::Personnage(int id, int vie) : id(id), vie(vie), attaque(0)
{
	// Allocation liste
	cibles = std::list<Personnage*>();
}

// Code source du destructeur par défaut
Personnage::~Personnage()
{
	delete this->attaque;
}

// Source de baisserVie
void Personnage::baisserVie(Attaque attaque)
{
	int quantite = attaque.getDegats();
	this->vie -= quantite;

	if(this->vie < 0)
		this->vie = 0;
}

// Source d'une attaque d'un personnage
void Personnage::attaquer()
{
	// S'il y a des cibles on fait quelque chose
	// S'il y a au moins une attaque aussi
	if(!cibles.empty())
	{
		// Itérateur de parcours de liste
		std::list<Personnage*>::iterator i;

		// Parcours de toutes les cibles pour les endommager
		for(i = cibles.begin(); i != cibles.end(); i++)
		{
			// On récupère la cible et on la blesse
			(*i)->baisserVie(*this->attaque);
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

// source copie
Personnage* Personnage::copie(int new_id)
{
	Personnage* copie = new Personnage(new_id, this->vie);
	/*
	Attaque* new_attaque = new Attaque(this->attaque->getType(), this->attaque->getDegats());
	copie->setAttaque(new_attaque);*/

	return copie;
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

// Source getter attaque
Attaque* Personnage::getAttaque()
{
	return attaque;
}

// Source setter attaque
void Personnage::setAttaque(Attaque attaque)
{
	// suppression de l'ancienne attaque
	delete this->attaque;

	// On change l'attaque courante par un pointeur dynamique
	this->attaque = new Attaque(attaque.getType(), attaque.getDegats());
}
