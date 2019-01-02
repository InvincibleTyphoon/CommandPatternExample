#pragma once
#include <stack>
#include "Command.h"
#include "../HomeObejcets/Fan.h"

//��ǳ�� �ӵ� ���� Ŀ�ǵ�
//execute �� ����->����->����->����->����->����... ������ �����
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

