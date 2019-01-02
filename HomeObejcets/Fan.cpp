#include "Fan.h"



Fan::Fan()
{
	fanStatus = FanStatus::Off;
}

void Fan::high()
{
	fanStatus = FanStatus::HighSpeed;
	cout << "fan speed changed to : high speed" << endl;
}

void Fan::medium()
{
	fanStatus = FanStatus::MediumSpeed;
	cout << "fan speed changed to : medium speed" << endl;
}

void Fan::low()
{
	fanStatus = FanStatus::LowSpeed;
	cout << "fan speed changed to : low speed" << endl;
}

void Fan::off()
{
	fanStatus = FanStatus::HighSpeed;
	cout << "fan turned off" << endl;
}

Fan::FanStatus Fan::getSpeed()
{
	return fanStatus;
}

string Fan::toString()
{
	string str = "fan : ";
	switch (fanStatus)
	{
	case FanStatus::HighSpeed :
		str += "high Speed";
		break;
	case FanStatus::MediumSpeed:
		str += "medium Speed";
		break;
	case FanStatus::LowSpeed:
		str += "low Speed";
		break;
	default:
		break;
	}
	return str;
}

