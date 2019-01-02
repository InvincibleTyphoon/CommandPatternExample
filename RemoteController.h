#pragma once
#include <vector>
#include <stack>
#include <iostream>
#include "Commands/Command.h"
#include "Commands/NoCommand.h"

using namespace std;

//여러 커맨드를 묶어서 리모컨처럼 사용하는 클래스
class RemoteController
{
public:
	RemoteController();
	void setCommand(int slot, Command* onCommand, Command* offCommand);
	void onButtonClicked(int slot);
	void offButtonClicked(int slot);
	void undoButtonClicked();

private:
	//켜기 커맨드를 모은 벡터
	vector<Command*> onCommands;

	//끄기 커맨드를 모은 벡터
	vector<Command*> offCommands;

	//커맨드 실행 기록
	stack<Command*> commandStack;	
};