#include "MenuState.h"
#include <iostream>
#include "MenuSections.h"

void MenuState::Render()
{
	std::cout
		<< "-------------------------------------------------------------\n"
		<< "  -------         ----        --       --      -------       \n"
		<< "  --    --      --    --      ---      --     --     --      \n"
		<< "  --    --     --      --     ----     --    --       -      \n"
		<< "  --    --     --      --     -- --    --    --              \n"
		<< "  -------      --      --     --  --   --    --              \n"
		<< "  --           --      --     --   --  --    --     -----    \n"
		<< "  --            --    --      --    -----     --     --      \n"
		<< "  --              ----        --    -----       ------       \n"
		<< "-------------------------------------------------------------\n";

	std::cout
		<< "Menu:\n";
	for (int i = 0; i < MENUSIZE; i++)
	{
		m_menuOptions[i].Render();
	}
}





MenuState::MenuState() : m_playerInput()
{
}
