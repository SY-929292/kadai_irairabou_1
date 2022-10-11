#include "DxLib.h"

#include "SceneMain.h"
#include "SceneMenu.h"
#include "SceneFinish.h"

void SceneMain::init()
{
	m_textPosX = 0;
	m_textVecX = 4;
}

SceneBase* SceneMain::update()
{
	// ï∂éöÇÃà⁄ìÆ
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
	if (padState & PAD_INPUT_2)
	{
		PlaySoundFile("sound/cursor1.mp3", DX_PLAYTYPE_NORMAL);
	}
	if (padState & PAD_INPUT_3)
	{
		return (new SceneMenu);
	}

	return this;
}

void SceneMain::draw()
{
	DrawString(m_textPosX, 0, "ÉQÅ[ÉÄâÊñ ", GetColor(255, 255, 255));
}