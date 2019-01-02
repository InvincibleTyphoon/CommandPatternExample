#pragma once
#include "Command.h"
#include "../HomeObejcets/Stereo.h"

//�뷡 �ѱ� Ŀ�ǵ�
class StereoOnCommand : public Command
{
public:
	StereoOnCommand(Stereo * stereo);
	void execute();
	void undo();
private:
	Stereo * stereo = NULL;
};

