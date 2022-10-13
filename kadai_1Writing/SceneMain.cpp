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

	// �X�^�[�g�ʒu�g
	DrawLineAA(10, 10, 150, 10, GetColor(255, 255, 255));		// ��
	DrawLineAA(10, 10, 10, 150, GetColor(255, 255, 255));		// ��
	DrawLineAA(150, 10, 150, 50, GetColor(255, 255, 255));		// ��

	//�ʍs�͈�
	DrawLineAA(10, 150, 790, 150, GetColor(255, 255, 255));		// ��
	DrawLineAA(150, 50, 890, 50, GetColor(255, 255, 255));		// ��
	DrawLineAA(890, 50, 890, 450, GetColor(255, 255, 255));		// ��
	DrawLineAA(790, 150, 790, 350, GetColor(255, 255, 255));	// ��
	DrawLineAA(890, 450, 300, 450, GetColor(255, 255, 255));	// ��
	DrawLineAA(790, 350, 100, 350, GetColor(255, 255, 255));	// ��
	DrawLineAA(300, 450, 300, 550, GetColor(255, 255, 255));	// ��
	DrawLineAA(100, 350, 100, 600, GetColor(255, 255, 255));	// ��
	DrawLineAA(300, 550, 860, 840, GetColor(255, 255, 255));	// ��
	DrawLineAA(100, 600, 860, 970, GetColor(255, 255, 255));	// ��

	// �S�[����g
	DrawLineAA(860, 840, 990, 840, GetColor(255, 255, 255));		// ��
	DrawLineAA(860, 970, 860, 990, GetColor(255, 255, 255));		// ��
	DrawLineAA(990, 840, 990, 990, GetColor(255, 255, 255));		// ��
	DrawLineAA(860, 990, 990, 990, GetColor(255, 255, 255));		// ��
}