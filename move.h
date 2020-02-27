#pragma once

//Forward class declarations:
class Player;
class Spot;
class Piece;

class Move
{
private:
	Player *player;
	Spot *start;
	Spot *end;
	Piece *pieceMoved;
	Piece *pieceKilled;
	bool castlingMove = false;

public:
	virtual ~Move()
	{
		delete player;
		delete start;
		delete end;
		delete pieceMoved;
		delete pieceKilled;
	}

	Move(Player *player, Spot *start, Spot *end);

	virtual bool isCastlingMove();

	virtual void setCastlingMove(bool castlingMove);
};
