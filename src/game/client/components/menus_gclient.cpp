/* GClient fork — settings tab for client-specific options (gc_* config, etc.). */

#include "menus.h"

#include <engine/shared/config.h>

#include <game/client/ui.h>
#include <game/localization.h>

void CMenus::RenderSettingsGClient(CUIRect MainView)
{
	CUIRect Headline, Button;
	MainView.HSplitTop(30.0f, &Headline, &MainView);
	Ui()->DoLabel(&Headline, Localize("GClient"), 20.0f, TEXTALIGN_ML);

	MainView.HSplitTop(15.0f, nullptr, &MainView);

	Ui()->DoLabel(&MainView, Localize("Hammer hit (tee vs tee)"), 16.0f, TEXTALIGN_ML);
	MainView.HSplitTop(18.0f, nullptr, &MainView);

	MainView.HSplitTop(20.0f, &Button, &MainView);
	Ui()->DoScrollbarOption(&g_Config.m_GcHammerHitVanillaBurst, &g_Config.m_GcHammerHitVanillaBurst, &Button, Localize("Vanilla burst size"), 0, 220);

	MainView.HSplitTop(10.0f, nullptr, &MainView);

	MainView.HSplitTop(20.0f, &Button, &MainView);
	if(DoButton_CheckBox(&g_Config.m_GcHammerHitStars, Localize("Extra sparkles"), g_Config.m_GcHammerHitStars, &Button))
		g_Config.m_GcHammerHitStars ^= 1;

	if(!g_Config.m_GcHammerHitStars)
		return;

	MainView.HSplitTop(10.0f, nullptr, &MainView);

	MainView.HSplitTop(20.0f, &Button, &MainView);
	Ui()->DoScrollbarOption(&g_Config.m_GcHammerHitStarsCount, &g_Config.m_GcHammerHitStarsCount, &Button, Localize("Sparkle count"), 4, 40);

	MainView.HSplitTop(5.0f, nullptr, &MainView);
	MainView.HSplitTop(20.0f, &Button, &MainView);
	Ui()->DoScrollbarOption(&g_Config.m_GcHammerHitStarsSpread, &g_Config.m_GcHammerHitStarsSpread, &Button, Localize("Spread radius"), 10, 120);

	MainView.HSplitTop(5.0f, nullptr, &MainView);
	MainView.HSplitTop(20.0f, &Button, &MainView);
	Ui()->DoScrollbarOption(&g_Config.m_GcHammerHitStarsSize, &g_Config.m_GcHammerHitStarsSize, &Button, Localize("Sparkle size"), 6, 50);

	MainView.HSplitTop(5.0f, nullptr, &MainView);
	MainView.HSplitTop(20.0f, &Button, &MainView);
	Ui()->DoScrollbarOption(&g_Config.m_GcHammerHitStarsLife, &g_Config.m_GcHammerHitStarsLife, &Button, Localize("Lifetime (ms)"), 80, 700);
}
