#pragma once
#include <vector>
#include <algorithm>
#include "Command.h"

using namespace std;

//�ټ��� Ŀ�ǵ带 �����ϴ� Ŀ�ǵ�
class MacroCommand : public Command
{
public:
	MacroCommand(vector<Command*>& commands);
	void execute();
	void undo();
private:
	vector<Command*> commands;
};

