#pragma once

#include <iostream>
#include <memory>
#include <cmath>
#include <string>

enum Piece { KING, QUEEN, BISHOP, KNIGHT, ROOK, PAWN, EMPTY };
enum Color { WHITE, BLACK, NONE };

class Square
{

	int x, y;

public:
	void setSpace(Square*);
	void setEmpty();
	void setPieceAndColor(Piece, Color);
	Piece getPiece();
	Color getColor();
	void operator<(int);
	void operator>(int);
	int getX() { return x; }
	int getY() { return y; }
	Square();
	Piece piece;
	Color color;
};

class enPassant
{
    int coord_x;
    int coord_y;
    bool permitted;

public:
    enPassant();
    void setX(int x);
    void setY(int y);
    void setPermitted(bool perm);
    int getX();
    int getY();
    bool getPermitted();

};

class Board
{
  	enPassant EnPassant;
	Square square[8][8];
	Color turn=WHITE;

	bool moveKing(Square* thisKing, Square* thatSpace);
	bool moveQueen(Square* thisQueen, Square* thatSpace);
	bool moveBishop(Square* thisBishop, Square* thatSpace);
	bool moveKnight(Square* thisKnight, Square* thatSpace);
	bool moveRook(Square* thisRook, Square* thatSpace);
	bool movePawn(Square* thisPawn, Square* thatSpace);
	bool makeMove(int x1, int y1, int x2, int y2);
	void printBoard();
	int WhiteKingX;
	int WhiteKingY;
	int BlackKingX;
	int BlackKingY;

public:
	Square* getSquare(int x, int y) {
		return &square[x][y];
	}

	void setSquare(Square * s, int x, int y){
		square[x][y]=*s;
	}

	bool doMove();
    Color getTurn();
	void setBoard();
	void setBoard_EnPassant();
	void setBoard_Castling();
	bool playGame();
	Piece is_in_check(int, int);
	static bool check;
	bool is_checkmated(int, int);
	bool PawnPossibleMoves(int, int);
	bool QueenPossibleMoves(int, int);
	bool RookPossibleMoves(int, int);
	bool KingPossibleMoves(int, int);
	bool KnightPossibleMoves(int, int);
	bool BishopPossibleMoves(int, int);
	void swap_pieces(Square*, Square*);
};
