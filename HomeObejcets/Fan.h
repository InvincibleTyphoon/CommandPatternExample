#pragma once
#include <string>
#include <stack>
#include <iostream>

using namespace std;

//��ǳ�� Ŭ����
//����, �����ӵ�, �߰��ӵ�, �����ӵ��� ���¸� ����
class Fan
{
public:
	enum FanStatus { Off, LowSpeed, MediumSpeed, HighSpeed };
public:
	Fan();

	/*********��ǳ�� �ӵ� ���� �޼ҵ�********/
	void high();
	void medium();
	void low();
	void off();	
	////////////////////////////////////////

	//��ǳ���� �ӵ��� �޾ƿ�
	FanStatus getSpeed();
	string toString();
private:
	//���� ��ǳ���� ����
	FanStatus fanStatus;
};

