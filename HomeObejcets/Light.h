#pragma once
#include <string>
#include <iostream>

using namespace std;

//전등 클래스
//name 어트리뷰트로 어느 곳의 전등인지 구별됨
class Light
{
public:
	Light(string& name);
	void lightOn();
	void lightOff();
private:
	string name;
};

