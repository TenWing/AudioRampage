/**
* \file	 	joueur.cpp
* \brief	Code source de la classe joueur
* \author	Tendry
* \date		25 Décembre 2014
*/

// ###########################
// INCLUSIONS
#include <joueur.h>
#include <vector>
#include <iostream>
// ###########################

// Source du constructeur
Joueur::Joueur() : Personnage()
{
	// Allocation
	attaques = std::vector<Attaque>();
}

// Source du constructeur détaillé
Joueur::Joueur(int id, int vie) : Personnage(id, vie)
{
	// Allocation
	attaques = std::vector<Attaque>();
}

// Source du destructeur
Joueur::~Joueur()
{
	
}

// Source attaque suivante
void Joueur::attaqueSuivante()
{
	// On cherche la position de l'attaque
	std::vector<Attaque>::iterator i = this->positionAttaque();

		// on passe a l'attaque suivante
		// la première si on est à la dernière
		if((*i).equals(this->attaques[this->attaques.size()-1]))
		{
			i = this->attaques.begin();
		}
		// Sinon juste la suivante
		else
		{
			i++;
		}

		// Et on l'attribue à la valeur courante
		this->setAttaque(*i);
}

// Source attaque précédente
void Joueur::attaquePrecedente()
{
	// On cherche la position de l'attaque
	std::vector<Attaque>::iterator i = this->positionAttaque();

	// on passe a l'attaque suivante
	// la dernière si on est à la première
	if( (*i).equals( this->attaques[0] ) )
	{
		i = this->attaques.end();
		i--;
	}
	// Sinon juste la précédente
	else
	{
		i--;
	}
		// Et on l'attribue à la valeur courante
	this->setAttaque(*i);
}

// Source getter attaques
std::vector<Attaque> Joueur::getAttaques()
{
	return attaques;
}

// Source position attaque dans liste
std::vector<Attaque>::iterator Joueur::positionAttaque()
{
	// Création du vecteur
	std::vector<Attaque>::iterator i = this->attaques.begin();

	// Traitement si liste non vide
	if(!this->attaques.empty())
	{
		// On va regarder où on est
		bool trouve = false;

		// Parcours de la liste 
		while(!trouve && i != this->attaques.end())
		{
			// Si on trouve la position de l'attaque courante
			Attaque lattaque = *i;
			if(lattaque.equals(*this->attaque))
			{
				// Alors on garde la position de l'itérateur
				trouve = true;
			}
			else
			{
				// Sinon on incrémente l'itérateur
				i++;
			}
		}
	}

	return i;
}