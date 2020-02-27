# Chess-Game-In-C++
A chess game developed by me as my class project using object oriented principles in c++

The main classes are:-

Spot: A spot represents one block of the 8×8 grid and an optional piece.

Piece: The basic building block of the system, every piece will be placed on a spot. Piece class is an abstract class. The 
extended classes (Pawn, King, Queen, Rook, Knight, Bishop) implements the abstracted operations.

Board: Board is an 8×8 set of boxes containing all active chess pieces.

Player: Player class represents one of the participants playing the game.

Move: Represents a game move, containing the starting and ending spot. The Move class will also keep track of the player who 
made the move.

Game: This class controls the flow of a game. It keeps track of all the game moves, which player has the current turn, and the final result of the game.

Let’s look at the code to understand it. These codes are self-explanatory.You can have a look at the properties/variables and methods of different classes.

