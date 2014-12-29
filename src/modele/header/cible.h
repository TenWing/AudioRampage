/**
* \file		cible.h
* \brief	Définition de l'objet Personnage
* \author	Tendry
* \date		29 Décembre 2014
*/

#ifndef CIBLE_H
#define CIBLE_H

// ###################################
// INCLUSIONS
// ###################################

// Forward declaration
class Personnage;

/**
* \brief 	une cible permet à un personnage d'en attaquer
			un autre
* \author 	Tendry
* \version 	1.0
*/
class Cible
{
	public:

		/**
		* \brief 	Constructeur par défaut
		*/
		Cible();

		/**
		* \brief 	Construit une cible correctement
		* \param 	personnage le personnage ciblé
		*/
		Cible(Personnage* personnage);

		/**
		* \brief 	Destructeur de l'objet
		*/
		~Cible();

		/**
		* \brief 	getter de la valeur d'adresse
					de pointage
		* \return 	l'adresse de pointage
		*/
		Personnage* getValeur();

	private:

		/**
		* \brief 	l'adresse de pointage de la cible
		*/
		Personnage* valeur;
};

#endif