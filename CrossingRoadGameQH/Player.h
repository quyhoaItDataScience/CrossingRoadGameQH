#pragma once


class Player {
	int x; 
	int y; 
	vector<string> player = { "   ",
		"   ",
		" o ",
		"/|\\",
		"/ \\" };
public: 
	Player(); 
	void draw(); 
	void up(); 
	void down(); 

	int getX(); 
	int getY(); 
};
