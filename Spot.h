#pragma once

//Forward class declarations:
class Piece;

class Spot
{
private:
	Piece *piece;
	int x = 0;
	int y = 0;

public:
	virtual ~Spot()
	{
		delete piece;
	}

	Spot(int x, int y, Piece *piece);

	virtual Piece *getPiece();

	virtual void setPiece(Piece *p);

	virtual int getX();

	virtual void setX(int x);

	virtual int getY();

	virtual void setY(int y);
};
