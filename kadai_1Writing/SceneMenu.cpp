#include "DxLib.h"

#include "SceneMenu.h"
#include "SceneMain.h"
#include "SceneResult.h"

void SceneMenu::init()
{
	m_textPosY = 0;
	m_textVecY = 4;

	m_isEnd = false;
}

// ‚¬‚”

SceneBase* SceneMenu::update()
{
	

	int padState = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	if (padState & PAD_INPUT_1)
	{
		// main‚ÉØ‚è‘Ö‚¦
		return(new scenemain);
	}
	else if (keystate & pad_input_2)
	{
		// test‚ÉØ‚è‘Ö‚¦
		return (new scenefinish);
	}
	return this;
}

void SceneMenu::draw()
{
	DrawString(0, m_textPosY, "ƒ^ƒCƒgƒ‹‰æ–Ê", GetColor(255, 255, 255));
}