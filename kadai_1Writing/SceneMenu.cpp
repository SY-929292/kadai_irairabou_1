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

// ぎｔ

SceneBase* SceneMenu::update()
{
	

	int padState = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	if (padState & PAD_INPUT_1)
	{
		// mainに切り替え
		return(new scenemain);
	}
	else if (keystate & pad_input_2)
	{
		// testに切り替え
		return (new scenefinish);
	}
	return this;
}

void SceneMenu::draw()
{
	DrawString(0, m_textPosY, "タイトル画面", GetColor(255, 255, 255));
}