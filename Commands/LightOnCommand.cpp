#include "LightOnCommand.h"



LightOnCommand::LightOnCommand(Light* light)
{
	this->light = light;
}


void LightOnCommand::execute()
{
	light->lightOn();
}

void LightOnCommand::undo()
{
	light->lightOff();
}