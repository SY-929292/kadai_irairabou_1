#include "DxLib.h"
#include "SceneMain.h"
#include "SceneFinish.h"
#include "SceneMenu.h"

void SceneFinish::init()
{
	m_textPosX = 0;
	m_textPosY = 0;
	m_textVecX = 4;
	m_textVecY = 4;

	m_isEnd = false;
}

SceneBase* SceneFinish::update()
{
	// 文字の移動
	m_textPosX += m_textVecX;
	m_textPosY += m_textVecY;
	if (m_textPosX < 0)
	{
		m_textPosX = 0;
		m_textVecX = 4;
	}
	if (m_textPosX > 200)
	{
		m_textPosX = 200;
		m_textVecX = -4;
	}
	if (m_textPosY < 0)
	{
		m_textPosY = 0;
		m_textVecY = 4;
	}
	if (m_textPosY > 200)
	{
		m_textPosY = 200;
		m_textVecY = -4;
	}

	int padState = GetJoypadInputState(DX_INPUT_KEY_PAD1);

	if (padState & PAD_INPUT_3)
	{
		return (new SceneMenu);
	}

	return this;
}

void SceneFinish::draw()
{
	DrawString(m_textPosX, m_textPosY, "フィニッシュ", GetColor(255, 255, 255));
}