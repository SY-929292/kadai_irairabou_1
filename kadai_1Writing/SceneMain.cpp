#include "DxLib.h"

#include "SceneMain.h"
#include "SceneMenu.h"

void SceneMain::init()
{
	m_textPosX = 0;
	m_textVecX = 4;
}

SceneBase* SceneMain::update()
{
	// •¶š‚ÌˆÚ“®
	m_textPosX += m_textVecX;
	if (m_textPosX < 0)
	{
		m_textPosX = 0;
		m_textVecX = 4;
	}
	if (m_textPosX > 300)
	{
		m_textPosX = 300;
		m_textVecX = -4;
	}

	int padState = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	
	if (padState & PAD_INPUT_3)
	{
		return (new SceneMenu);
	}

	return this;
}

void SceneMain::draw()
{
	DrawString(m_textPosX, 0, "ƒQ[ƒ€‰æ–Ê", GetColor(255, 255, 255));
}