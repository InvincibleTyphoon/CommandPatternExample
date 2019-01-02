#pragma once
#include <string>
#include <stack>
#include <iostream>

using namespace std;

//선풍기 클래스
//꺼짐, 느린속도, 중간속도, 빠른속도의 상태를 가짐
class Fan
{
public:
	enum FanStatus { Off, LowSpeed, MediumSpeed, HighSpeed };
public:
	Fan();

	/*********선풍기 속도 조절 메소드********/
	void high();
	void medium();
	void low();
	void off();	
	////////////////////////////////////////

	//선풍기의 속도를 받아옴
	FanStatus getSpeed();
	string toString();
private:
	//현재 선풍기의 상태
	FanStatus fanStatus;
};

