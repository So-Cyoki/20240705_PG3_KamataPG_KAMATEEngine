#include "TitleScene.h"

void TitleScene::Init()
{
	sceneNo = static_cast<int>(SCENE::Title);
}

void TitleScene::Update(char keys[], char preKeys[])
{
	//シーンの切り替え
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE] != 0) {
		sceneNo = static_cast<int>(SCENE::Stage);
	}
}

void TitleScene::Draw()
{
	Novice::ScreenPrintf(1280 / 2, 720 / 2, "TitleScene");
	Novice::ScreenPrintf(1280 / 2, 720 / 2 + 20, "Press SPACE to Stage");
}
