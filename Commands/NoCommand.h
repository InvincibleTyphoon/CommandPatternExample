#pragma once
#include "Command.h"

//�ƹ��� ��ɵ� ���� �ʴ� Ŀ�ǵ�
//NULL ��ü
class NoCommand : public Command
{
public:
	NoCommand();
	void execute();
	void undo();
};

