#pragma once
class BaseState
{
public:

	virtual void Render() = 0;
	virtual void Update() = 0;
	virtual void Input() = 0;

private:


};

