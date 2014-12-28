/**
* \file		ennemi.h
* \brief	Définition de l'objet ennemi
* \author	Tendry
* \date		20 Décembre 2014
*/

#ifndef ENNEMI_H
#define ENNEMI_H

// ###################################
// INCLUSIONS
#include <personnage.h>
// ###################################

/**
* \brief	Un type particulier de personnage, les soldats
			ennemis du joueur
* \author 	Tendry
* \version	1.0
*/
class Ennemi : public Personnage
{
	public:

		/**
		* \brief	constructeur par défaut d'un ennemi
		*/
		Ennemi();

		/**
		* \brief	constructeur à paramètre de l'ennemi
		* \param 	id l'identifiant dy personnage
		* \param 	vie la vie du personnage
		* \param 	type le type de l'ennemi
		*/
		Ennemi(int id, int vie, Type type);

		/**
		* \brief	destructeur de l'objet
		*/
		virtual ~Ennemi();

		/**
		* \brief 	redéfinition de la methode baisserVie
		* \see 		Personnage
		* \details	fait le même traitement mais vérifie
					que le type de l'attaque correspond 
					au type de l'ennemi
		*/
		void baisserVie(Attaque attaque);

		/**
		* \brief 	surcharge opérateur de copie
		* \author	Tendry
		* \see 		Personnage
		* \param 	new_id le nouvel id
		* \return 	une copie de type Ennemi
		* \version 	1.0
		*/
		Personnage* copie(int new_id);

		// Fonction pertinentes
		// #########################################
		// GETTERS / SETTERS

		/**
		* \brief	Getter du type
		* \author 	Tendry
		* \return	le type de l'ennemi
		*/
		Type getType();

		/**
		* \brief	setter du type
		* \author	Tendry
		* \param 	type le nouveau type
		*/
		void setType(Type type);

	protected:

		/**
		* \brief	l'élément de sensibilité de l'ennemi
					l'ennemi ne peut subir des dégâts 
					que d'une attaque de même type
		*/
		Type type;
};

#endif