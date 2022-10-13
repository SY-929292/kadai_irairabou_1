#include "DxLib.h"

#include "SceneMenu.h"
#include "SceneResult.h"
#include "pad.h"

void SceneResult::init()
{
	m_textPosY = 0;
	m_textVecY = 4;

	m_isEnd = false;
}

SceneBase* SceneResult::update()
{
	// •¶š‚ÌˆÚ“®
	m_textPosY += m_textVecY;
	if (m_textPosY < 0)
	{
		m_textPosY = 4;
		m_textVecY = 0;
	}
	if (m_textPosY > 600)
	{
		m_textPosY = 0;
		m_textVecY = -4;
	}

	int padState = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	if (padState & PAD_INPUT_1)
	{
		//  Menu‚ÉØ‚è‘Ö‚¦
		return(new SceneMenu);
	}

	if (Pad::isTrigger(PAD_INPUT_4))
	{
		m_isEnd = true;
	}
	return this;
}

void SceneResult::draw()
{
	DrawString(m_textPosY, 0, "ƒŠƒUƒ‹ƒg",GetColor(255, 255, 255));
}