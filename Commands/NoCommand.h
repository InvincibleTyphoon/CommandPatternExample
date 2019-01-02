#pragma once
#include "Command.h"

//아무런 기능도 하지 않는 커맨드
//NULL 객체
class NoCommand : public Command
{
public:
	NoCommand();
	void execute();
	void undo();
};

