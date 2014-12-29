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
	Joueur* dummy = new Joueur(-1, 10);
	Personnage* yummy = new Personnage(-2, 5);

	dummy->ajouterCible(*yummy);
	dummy->attaquer();
	dummy->retirerCible(*yummy);

	delete dummy;
	delete yummy;

	return 0;
}