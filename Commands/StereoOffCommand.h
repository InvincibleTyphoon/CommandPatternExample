#pragma once
#include "Command.h"
#include "../HomeObejcets/Stereo.h"

//�뷡 ���� Ŀ�ǵ�
class StereoOffCommand : public Command
{
public:
	StereoOffCommand(Stereo * stereo);
	void execute();
	void undo();
private:
	Stereo * stereo = NULL;
};

