/**
* \file		attaque.h
* \brief	Définition de l'objet Attaque
* \author	Tendry
* \date		21 Décembre 2014
*/

#ifndef ATTAQUE_H
#define ATTAQUE_H

// ###################################
// INCLUSIONS
#include <type.h>
// ###################################

class Attaque
{
	public:

		/**
		* \brief	construit une attaque par défaut
		*/
		Attaque();

		/**
		* \brief 	construit une attaque avec des paramètres
		* \author	Tendry
		* \param 	type le type d'attaque
		* \param 	degats les dégâts de l'attaque
		*/
		Attaque(Type type, int degats);

		/**
		* \brief	détruit une attaque
		*/
		virtual ~Attaque();

		/**
		* \brief	indique si deux attaques sont égales
		* \author	Tendry
		* \param 	attaque l'attaque comparée
		* \return 	vrai ou faux
		*/
		bool equals(Attaque attaque);

		// Fonction pertinentes
		// #########################################
		// GETTERS / SETTERS

		/**
		* \brief	retourne le type de l'attaque
		* \author	Tendry
		* \return 	le type de l'attaque
		*/
		Type getType();

		/**
		* \brief	retourne les dégâts de l'attaque
		* \author	Tendry
		* \return 	les dégats de l'attaque (entier)
		*/
		int getDegats();

		/**
		* \brief 	modifie le type de l'attaque
		* \author	Tendry
		* \param	type le nouveau type
		*/
		void setType(Type type);

		/**
		* \brief	modifie les dégâts de l'attaque
		* \author	Tendry
		* \param	degats les nouveaux dégâts de l'attaque
		*/
		void setDegats(int degats);

	private:

		/**
		* \brief	le type d'attaque dont il s'agit
		*/
		Type type;

		/**
		* \brief	les dégâts qu'infligent cette attaque
		*/
		int degats;
};


#endif