#pragma once
#include <iostream>
#include <string>

using namespace std;

//���� ����� Ŭ����
class Stereo
{
public:
	Stereo();
	void stereoOn();
	void stereoOff();
	void setCD(string& cd);
	void setVolume(int volume);
private:
	string cd;
	int volume = 0;
};

