#include "Piece.h"
#include "Board.h"
#include "Spot.h"

Piece::Piece(bool white)
{
	this->setWhite(white);
}

bool Piece::isWhite()
{
	return this->white == true;
}

void Piece::setWhite(bool white)
{
	this->white = white;
}

bool Piece::isKilled()
{
	return this->killed == true;
}

void Piece::setKilled(bool killed)
{
	this->killed = killed;
}
