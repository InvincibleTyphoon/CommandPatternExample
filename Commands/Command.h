#pragma once

//Ŀ�ǵ� ���� ������ ���� Ŀ�ǵ� �������̽�
class Command
{
public:
	virtual void execute() = 0;
	virtual void undo() = 0;
};