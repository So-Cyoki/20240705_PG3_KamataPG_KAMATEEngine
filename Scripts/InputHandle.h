#pragma once
#include "ICommand.h"

class InputHandle
{
public:
	ICommand* HandleInput();

	void AssignMoveLeftCommand2PressKeyA();
	void AssignMoveRightCommand2PressKeyD();
	void AssignMoveUpCommand2PressKeyW();
	void AssignMoveDownCommand2PressKeyS();

private:
	ICommand* _pressKeyA;
	ICommand* _pressKeyD;
	ICommand* _pressKeyW;
	ICommand* _pressKeyS;
};

