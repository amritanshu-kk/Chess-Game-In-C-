#pragma once

#include "Piece.h"
#include <cmath>

//Forward class declarations:
class Board;
class Spot;

class King : public Piece
{
private:
	bool castlingDone = false;

public:
	King(bool white);

	virtual bool isCastlingDone();

	virtual void setCastlingDone(bool castlingDone);

	bool canMove(Board *board, Spot *start, Spot *end) override;

private:
	bool isValidCastling(Board *board, Spot *start, Spot *end);

public:
	virtual bool isCastlingMove(Spot *start, Spot *end);
};
