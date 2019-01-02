#include "RemoteController.h"

RemoteController::RemoteController()
{
	this->offCommands.resize(7);
	this->onCommands.resize(7);

	Command * noCommand = new NoCommand();
	for (int i = 0; i < 7; i++)
	{
		this->offCommands[i] = noCommand;
		this->onCommands[i] = noCommand;
	}
}

void RemoteController::setCommand(int slot, Command* onCommand, Command* offCommand)
{
	this->onCommands[slot] = onCommand;
	this->offCommands[slot] = offCommand;
}

void RemoteController::onButtonClicked(int slot)
{
	this->onCommands[slot]->execute();
	this->commandStack.push(onCommands[slot]);
}

void RemoteController::offButtonClicked(int slot)
{
	this->offCommands[slot]->execute();
	this->commandStack.push(offCommands[slot]);
}

void RemoteController::undoButtonClicked()
{
	if (commandStack.empty())
	{
		cout << "Remote Controller Undo Caution : no command history" << endl;
		return;
	}
	cout << "undo : ";
	commandStack.top()->undo();
	commandStack.pop();
	cout << endl;
}