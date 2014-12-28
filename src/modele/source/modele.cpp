/**
* \file		cpp
* \brief	code source du module "Modele" du MVC
* \author	Tendry
* \date		20 Décembre 2014
*/

// ###########################
// INCLUSIONS
#include <iostream>
#include <cstdlib>
#include <modele.h>
// ###########################

// Source du constructeur du modèle
Modele::Modele() : base_id(-1)
{
	// Le joueur a 100 points de vie
	// joueur = Joueur(getBase_id(), 100);

	// Allocations
	score = Score();
	ennemis = std::list<Personnage>();
	modelesEnnemi = std::vector<Personnage>();
	
	// On ajoute les ennemis 
    // possibles d'apparaître dans le jeu
    Ennemi sbireDNB = Ennemi(getBase_id(), 10, DNB);
    Attaque dnb = Attaque(DNB, 10);
    modelesEnnemi.push_back(sbireDNB);
    modelesEnnemi[0].setAttaque(dnb);
}

// Source du destructeur du modele
Modele::~Modele()
{

}

// source apparition ennemi
void Modele::apparitionEnnemi()
{
	// Création d'un chiffre de sélection au hasard
	// srand(time(NULL));
	// int offset = rand() % this->modelesEnnemi.size();
}

// Source du getter base_id
int Modele::getBase_id()
{
	// l'incrémentation est importante
	// permet de donner un id unique a chaque appel
	base_id++;

	return base_id;
}

// Source getter score
Score Modele::getScore()
{
	return score;
}

// Source setter score
void Modele::setScore(Score score)
{
	this->score = score;
}

// Source getter ennemis 
std::list<Personnage> Modele::getEnnemis()
{
	return ennemis;
}

// source getter joueur
Joueur Modele::getJoueur()
{
	return joueur;
}

// Source getter modelesEnnemi
std::vector<Personnage> Modele::getModelesEnnemi()
{
	return modelesEnnemi;
}