#pragma once

#include <vector>
#include <stdexcept>

//Forward class declarations:
class Spot;

class Board
{
public:
	std::vector<std::vector<Spot*>> boxes;

	Board();

	virtual Spot *getBox(int x, int y);

	virtual void resetBoard();
};
