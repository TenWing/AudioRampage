/**
* \file	 	score.cpp
* \brief	Code source de la classe Score
* \author	Tendry
* \date		24 Décembre 2014
*/

// ###########################
// INCLUSIONS
#include <score.h>
// ###########################

// Source constructeur par défaut
Score::Score() : points(0)
{

}

// Source destructeur
Score::~Score()
{

}

// Source getter points
int Score::getPoints()
{
	return points;
}

// Source setter points
void Score::setPoints(int points)
{
	this->points = points;
}