#include "Player.h"

bool Player::isWhiteSide()
{
	return this->whiteSide == true;
}

bool Player::isHumanPlayer()
{
	return this->humanPlayer == true;
}

HumanPlayer::HumanPlayer(bool whiteSide)
{
	this->whiteSide = whiteSide;
	this->humanPlayer = true;
}

ComputerPlayer::ComputerPlayer(bool whiteSide)
{
	this->whiteSide = whiteSide;
	this->humanPlayer = false;
}
