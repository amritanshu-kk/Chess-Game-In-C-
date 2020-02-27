#pragma once

#include "Public enum.h"
#include <vector>

//Forward class declarations:
class Player;
class Board;
class Move;

class Game
{
private:
	std::vector<Player*> players;
	Board *board;
	Player *currentTurn;
	GameStatus status = static_cast<GameStatus>(0);
	std::vector<Move*> *movesPlayed;

public:
	virtual ~Game()
	{
		delete board;
		delete currentTurn;
		delete movesPlayed;
	}

private:
	void initialize(Player *p1, Player *p2);

public:
	virtual bool isEnd();

	virtual bool getStatus();

	virtual void setStatus(GameStatus status);

	virtual bool playerMove(Player *player, int startX, int startY, int endX, int endY);

private:
	bool makeMove(Move *move, Player *player);
};
