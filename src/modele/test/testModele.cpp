/**
* \file     testModele.cpp
* \author   Tendry
* \date     20 Décembre 2014
* \brief    Point de départ du programme de test du modèle
*/

// ############################
// INCLUSIONS
#include <iostream>
#include <joueur.h>
#include <ennemi.h>
// ############################

/**
* \brief    fonction de départ du test du modèle
* \author   Tendry
* \return   0 exit success, autre = échec
*/
int main()
{
   Joueur tendry(-1, 10);
   Ennemi olivetti(-2, 5, DNB);
   Personnage dummy(-3, 10);

   Attaque melee(MELEE, 3);
   Attaque dnb(DNB, 5);

   std::vector<Attaque*> attaques;
   attaques.push_back(&melee);
   attaques.push_back(&dnb);
   tendry.setAttaques(attaques);
   tendry.setAttaque(&melee);
   // tendry.attaquePrecedente();
   tendry.ajouterCible(&olivetti);
   tendry.ajouterCible(&dummy);
   tendry.attaquer();

   std::cout << olivetti.getVie() << std::endl;
   std::cout << dummy.getVie() << std::endl;

   return 0;
}