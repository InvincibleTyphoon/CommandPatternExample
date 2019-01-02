#include "FanSpeedChangeCommand.h"

FanSpeedChangeCommand::FanSpeedChangeCommand(Fan * fan)
{
	this->fan = fan;
}

//fan 속도 변화 커맨드
void FanSpeedChangeCommand::execute()
{
	Fan::FanStatus curStatus = fan->getSpeed();
	fanStatusHistory.push(curStatus);
	switch (curStatus)
	{
	case Fan::Off:
		fan->low();
		break;
	case Fan::LowSpeed:
		fan->medium();
		break;
	case Fan::MediumSpeed:
		fan->high();
		break;
	case Fan::HighSpeed:
		fan->low();
		break;
	default:
		break;
	}	
}

void FanSpeedChangeCommand::undo()
{
	if (fanStatusHistory.empty())
	{
		cout << "FanSpeedChangeCommand undo caution : no previous Ssatus exists" << endl;
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