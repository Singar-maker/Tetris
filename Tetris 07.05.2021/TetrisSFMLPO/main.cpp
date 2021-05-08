#include <iostream>
#include <SFML/Graphics.hpp>
#include "Tboard.h"
#include "Tetromino.h"
#include <windows.h>
#include <time.h>

using namespace sf;
using namespace std;
 
int main(){
	//RenderWindow Window(VideoMode(320, 320), "Tetris", sf::Style::Close| sf::Style::Titlebar);
	
	//system("cls");
	Tboard table;
	Tetromino tetromino;
	

	//Table.Draw_Board();
	//Tetromino.show_Tetromino();
	table.Spawn_Tetromino(tetromino);
	system("cls");
	table.Draw_Board();
	
	return 0;
}