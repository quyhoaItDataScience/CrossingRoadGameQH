#include"Game.h"
#include"Player.h"


Player::Player()
{
	x = 10; 
	y = 10; 
}

void Player::draw() {

	for (int i = 0; i < player.size(); i++) {
		for (int j = 0; j < player[i].size(); j++) {
			cout << player[i][j];
		}
		cout << endl; 
	}
}

void Player::up()
{
	this->y--; 
	//game.gotoOxy(this->x, this->y); 
	this->draw(); 
}

void Player::down()
{
	this->y++; 
	//game.gotoOxy(this->x, this->y); 
	this->draw(); 
}

int Player::getX()
{
	return x; 
}

int Player::getY()
{
	return y; 
}
