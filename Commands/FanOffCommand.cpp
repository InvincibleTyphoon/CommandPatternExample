#include "FanOffCommand.h"

FanOffCommand::FanOffCommand(Fan * fan)
{
	this->fan = fan;
}

//¼±Ç³±â ²ô±â
void FanOffCommand::execute()
{
	fanStatusHistory.push(fan->getSpeed());
	fan->off();
}

void FanOffCommand::undo()
{
	if (fanStatusHistory.empty())
	{
		cout << "FanOffCommand undo caution : no previous Ssatus exists" << endl;
		return;
	}

	Fan::FanStatus prev = fanStatusHistory.top();
	fanStatusHistory.pop();

	cout << "fan undo : (" << fan->getSpeed() << ") -> (" << prev << ")" << endl;
	
	switch (prev)
	{
	case Fan::Off:
		fan->off();
		break;
	case Fan::LowSpeed:
		fan->low();
		break;
	case Fan::MediumSpeed:
		fan->medium();
		break;
	case Fan::HighSpeed:
		fan->high();
		break;
	default:
		break;
	}
}