#pragma once

#include "Piece.h"
#include <cmath>

//Forward class declarations:
class Board;
class Spot;

class Knight : public Piece
{
public:
	Knight(bool white);

	bool canMove(Board *board, Spot *start, Spot *end) override;
};
