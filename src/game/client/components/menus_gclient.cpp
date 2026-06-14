/* GClient fork — settings tab for client-specific options (gc_* config, etc.). */

#include "menus.h"

#include <game/client/ui.h>
#include <game/localization.h>

void CMenus::RenderSettingsGClient(CUIRect MainView)
{
	CUIRect Headline, Body;
	MainView.HSplitTop(30.0f, &Headline, &MainView);
	Ui()->DoLabel(&Headline, Localize("GClient"), 20.0f, TEXTALIGN_ML);

	MainView.HSplitTop(10.0f, nullptr, &MainView);
	MainView.HSplitTop(60.0f, &Body, &MainView);
	Ui()->DoLabel(&Body, Localize("GClient-specific options will be added here."), 14.0f, TEXTALIGN_ML);
}
