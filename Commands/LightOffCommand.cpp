#include "LightOffCommand.h"

LightOffCommand::LightOffCommand(Light* light)
{
	this->light = light;
}

void LightOffCommand::execute()
{
	light->lightOff();
}

void LightOffCommand::undo()
{
	light->lightOn();
}