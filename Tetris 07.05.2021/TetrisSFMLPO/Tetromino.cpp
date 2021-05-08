#include "Tetromino.h"

Tetromino::Tetromino()
{
	Block[0][0] = { 0 };
	Block[0][1] = { 1 };
	Block[0][2] = { 0 };
	Block[0][3] = { 0 };
	Block[1][0] = { 0 };
	Block[1][1] = { 1 };
	Block[1][2] = { 0 };
	Block[1][3] = { 0 };
	Block[2][0] = { 0 };
	Block[2][1] = { 1 };
	Block[2][2] = { 0 };
	Block[2][3] = { 0 };
	Block[3][0] = { 0 };
	Block[3][1] = { 1 };
	Block[3][2] = { 0 };
	Block[3][3] = { 0 };
	Tetromino::show_Tetromino();
}

void Tetromino::show_Tetromino()
{
	for (int i = 0; i < TETROMINO_SIZE; i++)
	{
		cout << "\n";
		for (int j = 0; j < TETROMINO_SIZE; j++)
			cout << Block[i][j];

	}
	return;
	
}
