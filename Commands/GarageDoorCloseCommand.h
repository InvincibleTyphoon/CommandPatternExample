#pragma once
#include "Command.h"
#include "../HomeObejcets/GarageDoor.h"

//차고 문 닫기 커맨드
class GarageDoorCloseCommand : public Command
{
public:
	GarageDoorCloseCommand(GarageDoor* garageDoor);
	void execute();
	void undo();
private:
	GarageDoor * garageDoor = NULL;
};

