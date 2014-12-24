/**
* \file     testModele.c
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
   	std::cout << "YOLO" << std::endl;
   	Personnage tendry(-1, 10), olivetti(-1, 5);

   	std::cout << "Tendry a " << tendry.getVie() << std::endl;
   	std::cout << "olivetti a " << olivetti.getVie() << std::endl;

   	tendry.ajouterCible(&olivetti);
   	tendry.attaquer(Attaque(MELEE, 3));
   	std::cout << "Tendry attaque olivetti !" << std::endl; 

   	std::cout << "olivetti a " << olivetti.getVie() << std::endl;

   	tendry.retirerCible(&olivetti);
    return 0;
}