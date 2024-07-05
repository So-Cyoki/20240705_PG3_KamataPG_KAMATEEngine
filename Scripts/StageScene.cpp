#include "StageScene.h"

void StageScene::Init()
{
	sceneNo = static_cast<int>(SCENE::Stage);
	_playerObj->Init();
	_inputHandler->AssignMoveLeftCommand2PressKeyA();
	_inputHandler->AssignMoveRightCommand2PressKeyD();
	_inputHandler->AssignMoveUpCommand2PressKeyW();
	_inputHandler->AssignMoveDownCommand2PressKeyS();
}

void StageScene::Update(char keys[], char preKeys[])
{
	//シーンの切り替え
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE] != 0) {
		sceneNo = static_cast<int>(SCENE::Clear);
	}

	//キーってコマンドを取る
	_iCommand = _inputHandler->HandleInput();
	if (this->_iCommand) {
		_iCommand->Exec(*_playerObj);
	}


	//Player
	_playerObj->Update(keys, preKeys);
}

void StageScene::Draw()
{
	//Player
	_playerObj->Draw();

	//Message
	Novice::ScreenPrintf(1280 / 2, 10, "StageScene");
	Novice::ScreenPrintf(1280 / 2, 720 / 2 + 70, "WASD to Move");
	Novice::ScreenPrintf(1280 / 2, 720 / 2 + 90, "Press SPACE to Clear");
}
