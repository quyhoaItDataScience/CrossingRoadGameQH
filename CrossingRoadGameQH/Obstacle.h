#pragma once
#pragma once
#include "point.h"
#include <thread>
#include <conio.h>
#include <windows.h>
class Obstacle {
protected:
	vector<point> p;
	int OFFSET_X;
	int OFFSET_Y;
	int direction;
	string shape[3];
	int distance;
public:
	void move();
	bool reachEndPoint(int x);
	void draw();
	void undraw();
	void undrawBack();
};