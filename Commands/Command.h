#pragma once

//커맨드 패턴 적용을 위한 커맨드 인터페이스
class Command
{
public:
	virtual void execute() = 0;
	virtual void undo() = 0;
};