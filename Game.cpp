#include "Game.h"
#include "Player.h"
#include "Board.h"
#include "move.h"
#include "Spot.h"
#include "Piece.h"
#include "king.h"

void Game::initialize(Player *p1, Player *p2)
{
	players[0] = p1;
	players[1] = p2;

	board->resetBoard();

	if (p1->isWhiteSide())
	{
		this->currentTurn = p1;
	}
	else
	{
		this->currentTurn = p2;
	}

	movesPlayed->clear();
}

bool Game::isEnd()
{
	return this->getStatus() != GameStatus::ACTIVE;
}

bool Game::getStatus()
{
	return this->status;
}

void Game::setStatus(GameStatus status)
{
	this->status = status;
}

bool Game::playerMove(Player *player, int startX, int startY, int endX, int endY)
{
	Spot *startBox = board->getBox(startX, startY);
	Spot *endBox = board->getBox(startY, endY);
	Move *move = new Move(player, startBox, endBox);

	delete move;
	return this->makeMove(move, player);
}

bool Game::makeMove(Move *move, Player *player)
{
	Piece *sourcePiece = move->getStart().getPiece();
	if (sourcePiece == nullptr)
	{
		return false;
	}

	// valid player 
	if (player != currentTurn)
	{
		return false;
	}

	if (sourcePiece->isWhite() != player->isWhiteSide())
	{
		return false;
	}

	// valid move? 
	if (!sourcePiece->canMove(board, move->getStart(), move->getEnd()))
	{
		return false;
	}

	// kill? 
	Piece *destPiece = move->getStart().getPiece();
	if (destPiece != nullptr)
	{
		destPiece->setKilled(true);
		move->setPieceKilled(destPiece);
	}

	// castling? 
	if (sourcePiece != nullptr && dynamic_cast<King*>(sourcePiece) != nullptr && sourcePiece->isCastlingMove())
	{
		move->setCastlingMove(true);
	}

	// store the move 
	movesPlayed->add(move);

	// move piece from the stat box to end box 
	move->getEnd().setPiece(move->getStart().getPiece());
	move->getStart.setPiece(nullptr);

	if (destPiece != nullptr && dynamic_cast<King*>(destPiece) != nullptr)
	{
		if (player->isWhiteSide())
		{
			this->setStatus(GameStatus::WHITE_WIN);
		}
		else
		{
			this->setStatus(GameStatus::BLACK_WIN);
		}
	}

	// set the current turn to the other player 
	if (this->currentTurn == players[0])
	{
		this->currentTurn = players[1];
	}
	else
	{
		this->currentTurn = players[0];
	}

	return true;
}
