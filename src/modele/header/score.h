/**
* \file		score.h
* \brief	Définition de l'objet Score
* \author	Tendry
* \date		24 Décembre 2014
*/

#ifndef SCORE_H
#define SCORE_H

// ###################################
// INCLUSIONS
// ###################################

/**
* \brief	Définit et stocke le score du joueur au cours
			d'une partie
* \author	Tendry
* \version	1.0
*/
class Score
{
	public:

		/**
		* \brief	Constructeur par défaut
		*/
		Score();

		/**
		* \brief	Destructeur de l'objet
		*/
		virtual ~Score();

		// Fonction pertinentes
		// #########################################
		// GETTERS / SETTERS

		/**
		* \brief	Accesseur au nombre de points de score
		* \return	le nombre de points en entier
		*/
		int getPoints();

		/**
		* \brief	Mutateur du nombre de points de score
		* \param	points les nouveaux points
		*/
		void setPoints(int points);

	private:

		/**
		* \brief	le nombre de points de score
		*/
		int points;
};

#endif