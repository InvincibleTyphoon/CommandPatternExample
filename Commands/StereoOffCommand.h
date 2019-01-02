#pragma once
#include "Command.h"
#include "../HomeObejcets/Stereo.h"

//노래 끄기 커맨드
class StereoOffCommand : public Command
{
public:
	StereoOffCommand(Stereo * stereo);
	void execute();
	void undo();
private:
	Stereo * stereo = NULL;
};

