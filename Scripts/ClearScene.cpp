#include "ClearScene.h"

void ClearScene::Init()
{
	sceneNo = static_cast<int>(SCENE::Clear);
}

void ClearScene::Update(char keys[], char preKeys[])
{
	//シーンの切り替え
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE] != 0) {
		sceneNo = static_cast<int>(SCENE::Title);
	}
}

void ClearScene::Draw()
{
	Novice::ScreenPrintf(1280 / 2, 720 / 2, "ClearScene");
	Novice::ScreenPrintf(1280 / 2, 720 / 2 + 20, "Press SPACE to Title");
}
