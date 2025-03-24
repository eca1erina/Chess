# Chess Game in C++

This is a simple console-based chess game implemented in C++. The game allows two players to play chess against each other, implementing the basic rules of the game. The project covers various chess functionalities, including moves for each piece, en passant, castling, and check/checkmate detection. The game is designed to be run in a terminal/command prompt window.

# Features
Basic Chess Rules: All standard chess pieces (King, Queen, Rook, Knight, Bishop, Pawn) with their movement rules.

Piece Movement: Players can move pieces using a coordinate-based system (e.g., x1y1 to x2y2 format).

Check and Checkmate: The game checks if the King is in check and ends the game when checkmate occurs.

Castling: The ability to perform castling with both the King and Rook.

En Passant: Implemented en passant rule for pawns.

Alternating Turns: The game alternates turns between White and Black players.

Gameplay: The user is prompted to enter a move as four digits representing the starting and ending positions on the chessboard (e.g., "0123" for moving a piece from (0, 1) to (2, 3)).

# Example Game Flow:
The board is displayed with the pieces represented as "K" (King), "Q" (Queen), "R" (Rook), "N" (Knight), "B" (Bishop), and "P" (Pawn).

Players alternate turns, moving their pieces by entering coordinates.

The game ends if one player's king is in checkmate, or the game is won by a player putting the opponent’s king in check.

# How to Play:
Clone or download the repository.

Compile the chess.cpp file using a C++ compiler.

Run the program in your terminal/command prompt to start playing!
