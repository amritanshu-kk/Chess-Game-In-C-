#pragma once

class Player
{
public:
	bool whiteSide = false;
	bool humanPlayer = false;

	virtual bool isWhiteSide();
	virtual bool isHumanPlayer();
};

class HumanPlayer : public Player
{

public:
	HumanPlayer(bool whiteSide);
};

class ComputerPlayer : public Player
{

public:
	ComputerPlayer(bool whiteSide);
};
