#include "MacroCommand.h"



MacroCommand::MacroCommand(vector<Command*>& commands)
{
	this->commands = commands;
	//copy(commands.begin(), commands.end(), this->commands);
}


void MacroCommand::execute()
{
	int size = this->commands.size();
	for (int i = 0; i < size; i++)
		commands[i]->execute();
}

void MacroCommand::undo()
{
	int size = this->commands.size();
	for (int i = 0; i < size; i++)
		commands[i]->undo();
}