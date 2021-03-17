#include <iostream>
#include <Windows.h>
#include <time.h>
constexpr auto TETRO = 4;


using namespace std;

void wypisywanie(const int ile, string Tetro[])
{
    for (int i = 0; i < 4; i++)
    {
        cout << Tetro[i] << endl;
    }
}

void rotacja(const int ile, string Tetro[]);


int main()
{
    string board[TETRO];

    board[0] = { "     " };
    board[1] = { " XXX " };
    board[2] = { "  X  " };
    board[3] = { "     " };

    wypisywanie(TETRO, board);
    
    rotacja(TETRO, board);
}

void rotacja(const int ile, string Tetro[])
{
    int licznik = 1;
    while (licznik)
    {
        switch (licznik) {
        case 1: {

            Tetro[0] = { "  X  " };
            Tetro[1] = { " XX  " };
            Tetro[2] = { "  X  " };
            Tetro[3] = { "     " };

            wypisywanie(TETRO, Tetro);
            licznik++;
            //system("cls");
            Sleep(1000);
            break;
        }

        case 2: {

            Tetro[0] = { "  X  " };
            Tetro[1] = { " XXX " };
            Tetro[2] = { "     " };
            Tetro[3] = { "     " };

            wypisywanie(TETRO, Tetro);
            licznik++;
            Sleep(1000);
            break;
        }
        case 3:
        {
            Tetro[0] = { "  X  " };
            Tetro[1] = { "  XX " };
            Tetro[2] = { "  X  " };
            Tetro[3] = { "     " };

            wypisywanie(TETRO, Tetro);
            licznik++;
            Sleep(1000);
            break;
        }
        case 4: {
            Tetro[0] = { "     " };
            Tetro[1] = { " XXX " };
            Tetro[2] = { "  X  " };
            Tetro[3] = { "     " };

            wypisywanie(TETRO, Tetro);
            licznik++;
            Sleep(1000);
            break;
        }
        }
        system("cls");
              if (licznik == 5)
                  licznik = 1;
        }
    }

