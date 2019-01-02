#include "GarageDoorOpenCommand.h"



GarageDoorOpenCommand::GarageDoorOpenCommand(GarageDoor* garageDoor)
{
	this->garageDoor = garageDoor;
}


void GarageDoorOpenCommand::execute()
{
	garageDoor->doorOpen();
}

void GarageDoorOpenCommand::undo()
{
	garageDoor->doorClose();
}