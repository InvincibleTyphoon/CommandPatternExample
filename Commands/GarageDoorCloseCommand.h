#pragma once
#include "Command.h"
#include "../HomeObejcets/GarageDoor.h"

//���� �� �ݱ� Ŀ�ǵ�
class GarageDoorCloseCommand : public Command
{
public:
	GarageDoorCloseCommand(GarageDoor* garageDoor);
	void execute();
	void undo();
private:
	GarageDoor * garageDoor = NULL;
};

