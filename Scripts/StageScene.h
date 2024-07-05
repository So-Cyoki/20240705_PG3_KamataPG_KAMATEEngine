#pragma once
#include "IScene.h"
class StageScene :
	public IScene
{
private:
	int _posX, _posY;
	int _width, _high;
public:
	void Init() override;
	void Update(char keys[], char preKeys[]) override;
	void Draw() override;
};

