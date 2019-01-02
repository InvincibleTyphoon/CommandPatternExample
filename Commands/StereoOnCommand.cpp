#include "StereoOnCommand.h"



StereoOnCommand::StereoOnCommand(Stereo * stereo)
{
	this->stereo = stereo;
}


void StereoOnCommand::execute()
{
	this->stereo->setCD(*new string("Sonyun Jump"));
	this->stereo->setVolume(13);
	this->stereo->stereoOn();
}

void StereoOnCommand::undo()
{
	this->stereo->stereoOff();
}