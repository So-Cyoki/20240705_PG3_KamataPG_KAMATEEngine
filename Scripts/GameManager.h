#pragma once
#include <memory>
#include "Scripts/IScene.h"
#include "Scripts/TitleScene.h"
#include "Scripts/StageScene.h"
#include "Scripts/ClearScene.h"

class GameManager
{
private:
	std::unique_ptr<IScene> _sceneArr[3];//シーンを保持する数列

	int _currentSceneNo;//今のシーン番号
	int _prevSceneNo;//前のシーン番号

public:
	GameManager();
	~GameManager();

	int Run(char keys[], char preKeys[]);//主関数
};

