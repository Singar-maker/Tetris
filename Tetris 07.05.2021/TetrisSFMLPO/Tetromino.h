#pragma once
#include <iostream>
#include "Tboard.h"
#define TETROMINO_SIZE 4
using namespace std;

class Tetromino
{
	friend class Tboard;
private:
	int Block[TETROMINO_SIZE][TETROMINO_SIZE] =
	{
		0,1,0,0,
		0,1,0,0,
		0,1,0,0,
		0,1,0,0
	};

public:
	Tetromino();
	//void RotateTetromino(int Block[][Board],int Board);
	void show_Tetromino();
	
	
};

