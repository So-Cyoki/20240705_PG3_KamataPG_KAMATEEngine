#pragma once
#include "IScene.h"
#include "Scripts/Player.h"
#include "Scripts/InputHandle.h"
#include "Scripts/ICommand.h"

class StageScene :
	public IScene
{
private:
	InputHandle* _inputHandler = new InputHandle();
	ICommand* _iCommand = nullptr;
	Player* _playerObj = new Player();
public:
	void Init() override;
	void Update(char keys[], char preKeys[]) override;
	void Draw() override;
};

