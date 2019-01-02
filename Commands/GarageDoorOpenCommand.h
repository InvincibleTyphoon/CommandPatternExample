#pragma once
#include "Command.h"
#include "../HomeObejcets/GarageDoor.h"

//���� �� ���� Ŀ�ǵ�
class GarageDoorOpenCommand : public Command
{
public:
	GarageDoorOpenCommand(GarageDoor* garageDoor);
	void execute();
	void undo();
private:
	GarageDoor * garageDoor = NULL;
};

