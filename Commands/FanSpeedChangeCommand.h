#pragma once
#include <stack>
#include "Command.h"
#include "../HomeObejcets/Fan.h"

//선풍기 속도 조절 커맨드
//execute 시 꺼짐->느림->보통->빠름->느림->보통... 순으로 변경됨
class FanSpeedChangeCommand : public Command
{
public:
	FanSpeedChangeCommand(Fan * fan);
	void execute();
	void undo();
private:
	Fan * fan = NULL;
	stack<Fan::FanStatus> fanStatusHistory;
};

