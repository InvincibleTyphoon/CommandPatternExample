#pragma once
#include <vector>
#include <stack>
#include <iostream>
#include "Commands/Command.h"
#include "Commands/NoCommand.h"

using namespace std;

//���� Ŀ�ǵ带 ��� ������ó�� ����ϴ� Ŭ����
class RemoteController
{
public:
	RemoteController();
	void setCommand(int slot, Command* onCommand, Command* offCommand);
	void onButtonClicked(int slot);
	void offButtonClicked(int slot);
	void undoButtonClicked();

private:
	//�ѱ� Ŀ�ǵ带 ���� ����
	vector<Command*> onCommands;

	//���� Ŀ�ǵ带 ���� ����
	vector<Command*> offCommands;

	//Ŀ�ǵ� ���� ���
	stack<Command*> commandStack;	
};