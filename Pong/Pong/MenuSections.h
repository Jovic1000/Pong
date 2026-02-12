#pragma once
#include <iostream>
class MenuSections
{
public:

	void Render();
	void Select();
	void Deselect();
	void SetName(std::string name);

	MenuSections();

private:
	std::string m_section[3] = {" ", " ", " "};
};

