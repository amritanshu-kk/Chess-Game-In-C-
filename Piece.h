#pragma once

//Forward class declarations:
class Board;
class Spot;

spublic class Piece
{

private:
	bool killed = false;
	bool white = false;

public:
	Piece(bool white);

	virtual bool isWhite();

	virtual void setWhite(bool white);

	virtual bool isKilled();

	virtual void setKilled(bool killed);

	virtual bool canMove(Board *board, Spot *start, Spot *end) = 0;
};
