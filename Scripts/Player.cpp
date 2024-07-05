#include "Player.h"

void Player::Init()
{
	_posX = 1280 / 2;
	_posY = 720 / 2;
	_width = _high = 60;
	_speed = 20;
}

void Player::Update(char keys[], char preKeys[])
{
	keys; preKeys;
}

void Player::Draw()
{
	Novice::ScreenPrintf(20, 20, "Player:%d,%d", _posX, _posY);
	Novice::DrawBox(_posX, _posY, _width, _high, 0, GREEN, kFillModeSolid);
}

void Player::MoveLeft()
{
	this->_posX -= this->_speed;
}

void Player::MoveRight()
{
	this->_posX += this->_speed;
}

void Player::MoveUp()
{
	this->_posY -= this->_speed;
}

void Player::MoveDown()
{
	this->_posY += this->_speed;
}
