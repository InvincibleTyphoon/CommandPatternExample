#include "GarageDoorCloseCommand.h"



GarageDoorCloseCommand::GarageDoorCloseCommand(GarageDoor* garageDoor)
{
	this->garageDoor = garageDoor;
}


void GarageDoorCloseCommand::execute()
{
	garageDoor->doorClose();
}

void GarageDoorCloseCommand::undo()
{
	garageDoor->doorOpen();
}