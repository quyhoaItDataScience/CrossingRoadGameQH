#include<Windows.h>
#include "Coord.h"

Coord::Coord()
{
	this->x = 0; 
	this->y = 0; 
}

void Coord::goToXY(int x, int y)
{
	COORD coord;
	coord.X = x; 
	coord.Y = y; 
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void Coord::setX(int x)
{
	this->x = x; 
}

void Coord::setY(int y)
{
	this->y = y; 
}
