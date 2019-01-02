#include "Light.h"

Light::Light(string& name)
{
	this->name = name;
}
void Light::lightOn()
{
	cout << name << "light turned on" << endl;
}

void Light::lightOff()
{
	cout << name << "light turned off" << endl;
}