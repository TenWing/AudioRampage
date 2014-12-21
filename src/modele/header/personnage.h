/**
* \file		personnage.h
* \brief	Définition de l'objet Personnage
* \author	Tendry
* \date		20 Décembre 2014
*/

#ifndef PERSONNAGE_H
#define PERSONNAGE_H

/**
* \brief	un personnage dans le jeu peut être ou le joueur
			ou un bot qui attaque le joueur
* \author	Tendry
* \version	1.0
*/
class Personnage
{
	public:

		/**
		* \brief 	constructeur par défaut
		*/
		Personnage();

		/**
		* \brief	destructeur par défaut
		*/
		~Personnage();

		/**
		* \brief	retourne la vie du personnage
		* \return 	la vie du personnage
		* \author	Tendry
		*/
		int getVie();

		/**
		* \brief	Change la vie du personnage
		* \param	vie la nouvelle vie du personnage
		* \author	Tendry
		*/
		void setVie(int vie);

	private:

		/**
		* \brief 	la santé du personnage
		*/
		int vie;
};

#endif