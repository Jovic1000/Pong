#pragma once
#include "BaseState.h"
#include "MenuSections.h"

const int MENUSIZE = 3;

class MenuState : public BaseState
{
public:

	void Render() override;
	void Update() override;
	void Input() override;

	MenuState();

private:

	char m_playerInput;
	MenuSections m_menuOptions[MENUSIZE];

};

