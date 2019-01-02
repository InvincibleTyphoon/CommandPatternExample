#pragma once
#include <stack>
#include "Command.h"
#include "../HomeObejcets/Fan.h"

using namespace std;

class FanOffCommand : public Command
{
public:
	FanOffCommand(Fan * fan);
	void execute();
	void undo();
private:
	Fan * fan = NULL;
	stack<Fan::FanStatus> fanStatusHistory;
};

