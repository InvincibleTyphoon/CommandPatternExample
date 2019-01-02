#pragma once
#include "Command.h"
#include "../HomeObejcets/GarageDoor.h"

//차고 문 열기 커맨드
class GarageDoorOpenCommand : public Command
{
public:
	GarageDoorOpenCommand(GarageDoor* garageDoor);
	void execute();
	void undo();
private:
	GarageDoor * garageDoor = NULL;
};

