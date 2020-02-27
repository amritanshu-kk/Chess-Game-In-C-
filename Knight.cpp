#include "Knight.h"
#include "Board.h"
#include "Spot.h"

Knight::Knight(bool white) : Piece(white)
{
}

bool Knight::canMove(Board *board, Spot *start, Spot *end)
{
	// we can't move the piece to a spot that has 
	// a piece of the same colour 
	if (end->getPiece()->isWhite() == this->isWhite())
	{
		return false;
	}

	int x = std::abs(start->getX() - end->getX());
	int y = std::abs(start->getY() - end->getY());
	return x * y == 2;
}
