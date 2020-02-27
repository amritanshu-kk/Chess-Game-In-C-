#include "king.h"
#include "Board.h"
#include "Spot.h"

King::King(bool white) : Piece(white)
{
}

bool King::isCastlingDone()
{
	return this->castlingDone == true;
}

void King::setCastlingDone(bool castlingDone)
{
	this->castlingDone = castlingDone;
}

bool King::canMove(Board *board, Spot *start, Spot *end)
{
	// we can't move the piece to a Spot that 
	// has a piece of the same color 
	if (end->getPiece()->isWhite() == this->isWhite())
	{
		return false;
	}

	int x = std::abs(start->getX() - end->getX());
	int y = std::abs(start->getY() - end->getY());
	if (x + y == 1)
	{
		// check if this move will not result in the king 
		// being attacked if so return true 
		return true;
	}

	return this->isValidCastling(board, start, end);
}

bool King::isValidCastling(Board *board, Spot *start, Spot *end)
{

	if (this->isCastlingDone())
	{
		return false;
	}

	// Logic for returning true or false 
}

bool King::isCastlingMove(Spot *start, Spot *end)
{
	// check if the starting and 
	// ending position are correct 
}
