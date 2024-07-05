#pragma once
#include <Novice.h>
class Player
{
private:
	int _posX, _posY;
	int _width, _high;
	int _speed;
public:
	void Init();
	void Update(char keys[], char preKeys[]);
	void Draw();

	void MoveLeft();
	void MoveRight();
	void MoveUp();
	void MoveDown();
};

