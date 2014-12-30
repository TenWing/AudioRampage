/**
* \file     testModele.cpp
* \author   Tendry
* \date     20 Décembre 2014
* \brief    Point de départ du programme de test du modèle
*/

// ############################
// INCLUSIONS
#include <iostream>
#include <modele.h>
// ############################

/**
* \brief    fonction de départ du test du modèle
* \author   Tendry
* \return   0 exit success, autre = échec
*/
int main()
{
	Joueur* joueur = new Joueur(-1, 100);

	Attaque dnb = Attaque(DNB, 5);
	Attaque melee = Attaque(MELEE, 2);
	joueur->getAttaques()->push_back(dnb);
	joueur->getAttaques()->push_back(melee);
	joueur->setAttaque((*joueur->getAttaques())[0]);

	Ennemi* ennemi = new Ennemi(-2, 10, DNB);
	joueur->ajouterCible(ennemi);
	joueur->retirerCible(ennemi);

	delete joueur;
	delete ennemi;
	return 0;
}