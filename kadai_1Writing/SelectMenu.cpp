#include "DxLib.h"

#include "SceneMenu.h"
#include "SceneMain.h"
#include "SceneResult.h"
#include "SceneFinish.h"


void SceneMenu::init()
{
	m_textPosY = 0;
	m_textVecY = 4;

	m_isEnd = false;
}

SceneBase* SceneMenu::update()
{
	// 文字の移動
	m_textPosY += m_textVecY;
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
	if (padState & PAD_INPUT_1)
	{
		// Mainに切り替え
		return(new SceneMain);
	}
	else if (padState & PAD_INPUT_2)
	{
		// Testに切り替え
		return (new SceneFinish);
	}
	return this;
}

void SceneMenu::draw()
{
	DrawString(0, m_textPosY, "タイトル画面", GetColor(255, 255, 255));
}