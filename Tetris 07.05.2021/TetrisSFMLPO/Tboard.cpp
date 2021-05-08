#include "Tboard.h"

void Tboard::Draw_Board()
{
	for (int i = 0; i < BOARD_HEIGHT; i++)
	{

		std::cout << "\n";
		for (int j = 0; j < BOARD_WIDTH; j++)
			std::cout << Table[i][j];

	}
	return;
}

Tboard::Tboard()
{
	for (int y = 0; y < BOARD_HEIGHT; y++)
		for (int x=0 ; x < BOARD_WIDTH; x++)
		{
			if (x == 0)
				Table[y][x] = 9;
			else if (x == BOARD_WIDTH -1)
				Table[y][x] = 9;
			else if (y == BOARD_HEIGHT - 1)
				Table[y][x] = 9;
			else
				Table[y][x] = 0;
		}
	Tboard::Draw_Board();
	
	
}

void Tboard::Spawn_Tetromino(Tetromino & block)
{
	for (size_t wysokosc = 0; wysokosc < TETROMINO_SIZE; wysokosc++)
		for (size_t szerokosc = 0; szerokosc = TETROMINO_SIZE; szerokosc++)
			//Table[wysokosc][szerokosc + 4] = block.Block[wysokosc][szerokosc];
			block.Block[wysokosc][szerokosc] = Table[wysokosc][szerokosc + 4];
}


		
