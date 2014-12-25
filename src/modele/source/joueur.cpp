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
	attaques = std::vector<Attaque*>();
}

// Source du constructeur détaillé
Joueur::Joueur(int id, int vie) : Personnage(id, vie)
{
	// Allocation
	attaques = std::vector<Attaque*>();
}

// Source du destructeur
Joueur::~Joueur()
{
	this->attaques.clear();
}

// Source attaque suivante
void Joueur::attaqueSuivante()
{
	// On cherche la position de l'attaque
	std::vector<Attaque*>::iterator i = this->positionAttaque();

	// On continue si on a été trouvé, sinon y a une erreur quelque part
	if(*i != 0)
	{
		// on passe a l'élément suivant
		i++;
		// Et on l'attribue à la valeur courante
		this->setAttaque(*i);
	}
}

// Source attaque précédente
void Joueur::attaquePrecedente()
{

}

// Source getter attaques
std::vector<Attaque*> Joueur::getAttaques()
{
	return attaques;
}

// Source setter attaques
void Joueur::setAttaques(std::vector<Attaque*> attaques)
{
	this->attaques = attaques;
}

// Source position attaque dans liste
std::vector<Attaque*>::iterator Joueur::positionAttaque()
{
	// Création du vecteur
	std::vector<Attaque*>::iterator i = this->attaques.begin();

	// Traitement si liste non vide
	if(!this->attaques.empty())
	{
		// On va regarder où on est
		bool trouve = false;

		// Parcours de la liste 
		while(!trouve && i != this->attaques.end())
		{
			// Si on trouve la position de l'attaque courante
			Attaque* lattaque = *i;
			if(lattaque->equals(*this->attaque))
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
	// Si non traitement pointeur NUL
	else
		*i = 0;

	return i;
}