#include "move.h"
#include "Player.h"
#include "Spot.h"
#include "Piece.h"

Move::Move(Player *player, Spot *start, Spot *end)
{
	this->player = player;
	this->start = start;
	this->end = end;
	this->pieceMoved = start->getPiece();
}

bool Move::isCastlingMove()
{
	return this->castlingMove == true;
}

void Move::setCastlingMove(bool castlingMove)
{
	this->castlingMove = castlingMove;
}
