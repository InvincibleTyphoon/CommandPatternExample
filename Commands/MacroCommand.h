#pragma once
#include <vector>
#include <algorithm>
#include "Command.h"

using namespace std;

//다수의 커맨드를 실행하는 커맨드
class MacroCommand : public Command
{
public:
	MacroCommand(vector<Command*>& commands);
	void execute();
	void undo();
private:
	vector<Command*> commands;
};

