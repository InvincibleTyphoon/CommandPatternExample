#include "Stereo.h"



Stereo::Stereo()
{
}


void Stereo::stereoOn()
{
	cout << "stereo turned on" << endl;
	cout << "cd : " << cd << endl;
	cout << "volume : " << volume << endl << endl;
}

void Stereo::stereoOff()
{
	cout << "stereo turned off" << endl;
}

void Stereo::setCD(string& cd)
{
	this->cd = cd;
}

void Stereo::setVolume(int volume)
{
	this->volume = volume;
}