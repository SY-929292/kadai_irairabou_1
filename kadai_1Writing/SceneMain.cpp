#include "DxLib.h"

#include "Maze.h"
#include "SceneMain.h"
#include "SceneMenu.h"
#include "SceneResult.h"

void SceneMain::init()
{
	m_textPosX = 0;
	m_textVecX = 4;
}

SceneBase* SceneMain::update()
{

	// �����̈ړ�
	m_textPosX += m_textVecX;
	if (m_textPosX < 0)
	{
		m_textPosX = 0;
		m_textVecX = 4;
	}
	if (m_textPosX > 600)
	{
		m_textPosX = 0;
		m_textVecX = -4;
	}

	int padState = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	
	if (padState & PAD_INPUT_3)
	{
		if (m_textPosX >= 300)
		{
			return(new SceneResult);
		}
		else
		{
			return (new SceneMenu);
		}
	}
	

	return this;
}


void SceneMain::draw()
{
	
	DrawString(m_textPosX, 0, "�Q�[�����", GetColor(255, 255, 255));
	DrawString(25, 55, "�X�^�[�g�ʒu", GetColor(255, 255, 255));
	DrawString(900, 900, "�S�[��", GetColor(255, 255, 255));

	m_Maze.draw();
}