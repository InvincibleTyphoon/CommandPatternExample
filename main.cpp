#include <iostream>
#include <string>
#include <vector>
#include "RemoteController.h"
#include "Commands/Command.h"
#include "Commands/GarageDoorCloseCommand.h"
#include "Commands/GarageDoorOpenCommand.h"
#include "Commands/LightOffCommand.h"
#include "Commands/LightOnCommand.h"
#include "HomeObejcets/Fan.h"
#include "HomeObejcets/GarageDoor.h"
#include "HomeObejcets/Light.h"
#include "HomeObejcets/Stereo.h"
#include "Commands/FanSpeedChangeCommand.h"
#include "Commands/FanOffCommand.h"
#include "Commands/MacroCommand.h"
#include "Commands/StereoOnCommand.h"
#include "Commands/StereoOffCommand.h"

using namespace std;

int main()
{
	/*****************Home Object 생성***********************/
	Fan * fan = new Fan();
	GarageDoor * garageDoor = new GarageDoor();
	Light * kitchenLight = new Light(*(new string("Kitchen")));
	Light * bedroomLight = new Light(*(new string("Bed Room")));
	Stereo * stereo = new Stereo();	
	///////////////////////////////////////////////////////


	/******************************Command 생성************************************/
	Command * kitchenLightOnCommand = new LightOnCommand(kitchenLight);
	Command * kitchenLightOffCommand = new LightOffCommand(kitchenLight);
	Command * bedroomLightOnCommand = new LightOnCommand(bedroomLight);
	Command * bedroomLightOffCommand = new LightOffCommand(bedroomLight);
	Command * garageDoorOpenCommand = new GarageDoorOpenCommand(garageDoor);
	Command * garageDoorCloseCommand = new GarageDoorCloseCommand(garageDoor);	
	Command * fanSpeedChangeCommand = new FanSpeedChangeCommand(fan);
	Command * fanSpeedOffCommand = new FanOffCommand(fan);
	Command * stereoOnCommand = new StereoOnCommand(stereo);
	Command * stereoOffCommand = new StereoOffCommand(stereo);	
	vector<Command*> partyOn = { kitchenLightOnCommand,bedroomLightOnCommand,garageDoorOpenCommand,stereoOnCommand };
	vector<Command*> partyOff = { kitchenLightOffCommand,bedroomLightOffCommand,garageDoorCloseCommand,stereoOffCommand};
	Command * partyOnCommand = new MacroCommand(partyOn);
	Command * partyOffCommand = new MacroCommand(partyOff);
	///////////////////////////////////////////////////////////////////////////////////

	/*************************Remote Controller 생성 및 설정******************************/
	RemoteController * remote = new RemoteController();
	remote->setCommand(0, kitchenLightOnCommand, kitchenLightOffCommand);
	remote->setCommand(1, bedroomLightOnCommand, bedroomLightOffCommand);
	remote->setCommand(2, garageDoorOpenCommand, garageDoorCloseCommand);
	remote->setCommand(3, fanSpeedChangeCommand, fanSpeedOffCommand);
	remote->setCommand(4, stereoOnCommand, stereoOffCommand);
	remote->setCommand(5, partyOnCommand, partyOffCommand);
	///////////////////////////////////////////////////////////////////////////////////////

	/*************************기능 테스트*****************************/
	//on 버튼 클릭
	remote->onButtonClicked(0);
	remote->onButtonClicked(1);
	remote->onButtonClicked(2);
	remote->onButtonClicked(3);
	remote->onButtonClicked(3);
	remote->onButtonClicked(3);
	remote->onButtonClicked(3);
	remote->onButtonClicked(3);
	remote->onButtonClicked(4);

	cout << endl << "party mode on!!" << endl;
	remote->onButtonClicked(5);

	//끄기 버튼 클릭
	remote->offButtonClicked(0);
	remote->offButtonClicked(1);
	remote->offButtonClicked(2);
	remote->offButtonClicked(3);
	remote->offButtonClicked(4);
	remote->offButtonClicked(5);

	cout << "-----------------Undo Phase-----------------" << endl;

	//undo
	for (int i = 0; i < 21; i++)
		remote->undoButtonClicked();
	///////////////////////////////////////////////////////////


	return 0;
}