#include "ICommand.h"

ICommand::~ICommand()
{
}

void MoveLeftCommand::Exec(Player& player)
{
	player.MoveLeft();
}

void MoveRightCommand::Exec(Player& player)
{
	player.MoveRight();
}

void MoveUpCommand::Exec(Player& player)
{
	player.MoveUp();
}

void MoveDownCommand::Exec(Player& player)
{
	player.MoveDown();
}

