#include "StereoOffCommand.h"



StereoOffCommand::StereoOffCommand(Stereo * stereo)
{
	this->stereo = stereo;
}


void StereoOffCommand::execute()
{
	this->stereo->stereoOff();
}

void StereoOffCommand::undo()
{
	this->stereo->stereoOn();
}