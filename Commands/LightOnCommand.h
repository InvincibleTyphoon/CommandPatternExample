#pragma once
#include "Command.h"
#include "../HomeObejcets/Light.h"


//�� �ѱ� Ŀ�ǵ�
//light�� name ��Ʈ����Ʈ�� ���� ��� ���� �ִ� �������� ������
class LightOnCommand : public Command
{
public:
	LightOnCommand(Light* light);
	void execute();
	void undo();
private:
	Light * light = NULL;
};

