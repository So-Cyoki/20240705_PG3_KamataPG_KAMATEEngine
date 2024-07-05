#include "StageScene.h"

void StageScene::Init()
{
	sceneNo = static_cast<int>(SCENE::Stage);
	_posX = 1280 / 2;
	_posY = 720 / 2;
	_width = _high = 60;
}

void StageScene::Update(char keys[], char preKeys[])
{
	//移動
	if (keys[DIK_W]) {
		_posY -= 20;
	}
	if (keys[DIK_S]) {
		_posY += 20;
	}
	if (keys[DIK_A]) {
		_posX -= 20;
	}
	if (keys[DIK_D]) {
		_posX += 20;
	}
	//シーンの切り替え
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE] != 0) {
		sceneNo = static_cast<int>(SCENE::Clear);
	}
}

void StageScene::Draw()
{
	Novice::DrawBox(_posX, _posY, _width, _high, 0, GREEN, kFillModeSolid);
	Novice::ScreenPrintf(1280 / 2, 10, "StageScene");
	Novice::ScreenPrintf(1280 / 2, 720 / 2 + 70, "WASD to Move");
	Novice::ScreenPrintf(1280 / 2, 720 / 2 + 90, "Press SPACE to Clear");
}
