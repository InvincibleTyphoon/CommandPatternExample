#pragma once
#include "Command.h"
#include "../HomeObejcets/Light.h"

//불 켜기 커맨드
//light의 name 어트리뷰트를 통해 어느 곳에 있는 전등인지 구별함
class LightOffCommand : public Command
{
public:
	LightOffCommand(Light* light);
	void execute();
	void undo();
private:
	Light * light = NULL;
};

