/**
* \file     testModele.c
* \author   Tendry
* \date     20 Décembre 2014
* \brief    Point de départ du programme de test du modèle
*/

// ############################
// INCLUSIONS
#include <iostream>
#include <joueur.h>
// ############################

/**
* \brief    fonction de départ du test du modèle
* \author   Tendry
* \return   0 exit success, autre = échec
*/
int main()
{
   Joueur tendry(-1, 10);
   Personnage olivetti(-2, 5);

   Attaque melee(MELEE, 3);
   Attaque dnb(DNB, 5);

   std::vector<Attaque*> attaques;
   attaques.push_back(&melee);
   attaques.push_back(&dnb);
   tendry.setAttaques(attaques);
   tendry.setAttaque(&melee);
   tendry.attaqueSuivante();
   tendry.ajouterCible(&olivetti);
   tendry.attaquer();

   std::cout << olivetti.getVie() << std::endl;

   return 0;
}