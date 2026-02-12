#include "MenuSections.h"

void MenuSections::Render()
{
	std::cout << m_section[0] << m_section[1] << m_section[2] << std::endl;
}

void MenuSections::SetName(std::string name)
{
	m_section[1] = name;
}

void MenuSections::Select()
{
	m_section[0] = ">";
	m_section[2] = "<";

}

void MenuSections::Deselect()
{
	m_section[0] = " ";
	m_section[2] = " ";
}

MenuSections::MenuSections() : m_section()
{
}
