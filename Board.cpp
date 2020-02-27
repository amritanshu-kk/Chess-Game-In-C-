#include "Board.h"
#include "Spot.h"
#include "Knight.h"

Board::Board()
{
	this->resetBoard();
}

Spot *Board::getBox(int x, int y)
{

	if (x < 0 || x > 7 || y < 0 || y > 7)
	{
		throw std::runtime_error("Index out of bound");
	}

	return boxes[x][y];
}

void Board::resetBoard()
{
	// initialize white pieces 
	Rook tempVar(true);
	boxes[0][0] = new Spot(0, 0, &tempVar);
	Knight tempVar2(true);
	boxes[0][1] = new Spot(0, 1, &tempVar2);
	Bishop tempVar3(true);
	boxes[0][2] = new Spot(0, 2, &tempVar3);
	//... 
	Pawn tempVar4(true);
	boxes[1][0] = new Spot(1, 0, &tempVar4);
	Pawn tempVar5(true);
	boxes[1][1] = new Spot(1, 1, &tempVar5);
	//... 

	// initialize black pieces 
	Rook tempVar6(false);
	boxes[7][0] = new Spot(7, 0, &tempVar6);
	Knight tempVar7(false);
	boxes[7][1] = new Spot(7, 1, &tempVar7);
	Bishop tempVar8(false);
	boxes[7][2] = new Spot(7, 2, &tempVar8);
	//... 
	Pawn tempVar9(false);
	boxes[6][0] = new Spot(6, 0, &tempVar9);
	Pawn tempVar10(false);
	boxes[6][1] = new Spot(6, 1, &tempVar10);
	//... 

	// initialize remaining boxes without any piece 
	for (int i = 2; i < 6; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			boxes[i][j] = new Spot(i, j, nullptr);
		}
	}
}
