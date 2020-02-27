#include "Spot.h"
#include "Piece.h"

Spot::Spot(int x, int y, Piece *piece)
{
	this->setPiece(piece);
	this->setX(x);
	this->setY(y);
}

Piece *Spot::getPiece()
{
	return this->piece;
}

void Spot::setPiece(Piece *p)
{
	this->piece = p;
}

int Spot::getX()
{
	return this->x;
}

void Spot::setX(int x)
{
	this->x = x;
}

int Spot::getY()
{
	return this->y;
}

void Spot::setY(int y)
{
	this->y = y;
}
