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

SceneBase* SceneMenu::update()
{
	

	int padState = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	if (padState & PAD_INPUT_1)
	{
		// main�ɐ؂�ւ�
		return(new SceneMain);
	}
	
	return this;
}

void SceneMenu::draw()
{
	DrawString(0, m_textPosY, "�^�C�g�����", GetColor(255, 255, 255));
}