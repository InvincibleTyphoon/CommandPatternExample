#pragma once
#include "Command.h"
#include "../HomeObejcets/Stereo.h"

//노래 켜기 커맨드
class StereoOnCommand : public Command
{
public:
	StereoOnCommand(Stereo * stereo);
	void execute();
	void undo();
private:
	Stereo * stereo = NULL;
};

