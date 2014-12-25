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
   Modele modele = Modele();
   std::cout << modele.getModelesEnnemi().size() << std::endl;
   std::cout << modele.getModelesEnnemi()[0]->getAttaque()->getDegats() << std::endl;

   return 0;
}