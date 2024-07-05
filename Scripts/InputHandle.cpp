#include "InputHandle.h"

ICommand* InputHandle::HandleInput()
{
	if (Novice::CheckHitKey(DIK_A)) {
		return _pressKeyA;
	}
	else if (Novice::CheckHitKey(DIK_D)) {
		return _pressKeyD;
	}
	else if (Novice::CheckHitKey(DIK_W)) {
		return _pressKeyW;
	}
	else if (Novice::CheckHitKey(DIK_S)) {
		return _pressKeyS;
	}
	return nullptr;
}

void InputHandle::AssignMoveLeftCommand2PressKeyA()
{
	ICommand* command = new MoveLeftCommand();
	this->_pressKeyA = command;
}
void InputHandle::AssignMoveRightCommand2PressKeyD()
{
	ICommand* command = new MoveRightCommand();
	this->_pressKeyD = command;
}
void InputHandle::AssignMoveUpCommand2PressKeyW()
{
	ICommand* command = new MoveUpCommand();
	this->_pressKeyW = command;
}
void InputHandle::AssignMoveDownCommand2PressKeyS()
{
	ICommand* command = new MoveDownCommand();
	this->_pressKeyS = command;
}
