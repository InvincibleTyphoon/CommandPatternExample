#pragma once
#include <string>
#include <iostream>

using namespace std;

//���� Ŭ����
//name ��Ʈ����Ʈ�� ��� ���� �������� ������
class Light
{
public:
	Light(string& name);
	void lightOn();
	void lightOff();
private:
	string name;
};

