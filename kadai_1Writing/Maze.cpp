#include"DXLib.h"
#include "Maze.h"

//void Maze::setHandle(int background, int boxhandle)
//{
//	/*m_background = background;
//	getgraphsizef(background,950, 950);*/
//
//}

void Maze::init()
{
	// �O�g�̕\���ʒu
	m_outPos.x = 50;
	m_outPos.y = 50;

	// box1�̕\���ʒu
	m_pos1.x = 50;
	m_pos1.y = 150;

	// box2�̕\���ʒu
	m_pos2.x = 150;
	m_pos2.y = 440;

	// box3�̕\���ʒu
	m_pos3.x = 50;
	m_pos3.y = 630;

	// box4�̕\���ʒu
	m_pos4.x = 130;
	m_pos4.y = 780;

	// �S�[���̕\���ʒu
	m_goalPos.x = 860;
	m_goalPos.y = 870;

	// �O�g�̃T�C�Y
	m_outSize.x = 900;
	m_outSize.y = 900;

	// box1�̃T�C�Y
	m_size1.x = 750;
	m_size1.y = 200;

	// box2�̃T�C�Y
	m_size2.x = 800;
	m_size2.y = 105;

	// box3�̃T�C�Y
	m_size3.x = 800;
	m_size3.y = 60;

	// box4�̃T�C�Y
	m_size4.x = 820;
	m_size4.y = 90;

	// �S�[���̃T�C�Y
	m_goalSize.x = 90;
	m_goalSize.y = 80;
}

void Maze::draw()
{
	// �{�b�N�X�̕\��
	// �傫���O�g
	DrawBox(m_outPos.x, m_outPos.y, m_outPos.x + m_outSize.x, m_outPos.y + m_outSize.y, GetColor(255, 255, 255), false);

	// 1
	DrawBox(m_pos1.x, m_pos1.y, m_pos1.x + m_size1.x, m_pos1.y + m_size1.y, GetColor(255, 255, 255), true);

	// 2
	DrawBox(m_pos2.x, m_pos2.y, m_pos2.x + m_size2.x, m_pos2.y + m_size2.y, GetColor(255, 255, 255), true);

	// 3
	DrawBox(m_pos3.x, m_pos3.y, m_pos3.x + m_size3.x, m_pos3.y + m_size3.y, GetColor(255, 255, 255), true);

	// 4
	DrawBox(m_pos4.x, m_pos4.y, m_pos4.x + m_size4.x, m_pos4.y + m_size4.y, GetColor(255, 255, 255), true);

	// �S�[���n�_
	DrawBox(m_goalPos.x, m_goalPos.y, m_goalPos.x + m_goalSize.x, m_goalPos.y + m_goalSize.y, GetColor(0, 123, 255), true);


	// �傫���O�g
	//DrawBox(50, 50, 950, 950, GetColor(255, 255, 255), false);

	

	//// �X�^�[�g�ʒu�g
	// ���C���̕\��
	//DrawLineAA(50, 50, 150, 50, );		// �E
	//DrawLineAA(50, 50, 50, 150, GetColor(255, 255, 255));		// ��
	//DrawLineAA(150, 50, 150, 50, GetColor(255, 255, 255));		// �E

	////�ʍs�͈�
	//DrawLineAA(50, 150, 800, 150, GetColor(255, 255, 255));		// �E
	//DrawLineAA(150, 50, 900, 50, GetColor(255, 255, 255));		// ��
	//DrawLineAA(900, 50, 900, 450, GetColor(255, 255, 255));		// �E
	//DrawLineAA(800, 150, 800, 350, GetColor(255, 255, 255));	// ��
	//DrawLineAA(900, 450, 300, 450, GetColor(255, 255, 255));	// �E
	//DrawLineAA(800, 350, 50, 350, GetColor(255, 255, 255));	// ��
	//DrawLineAA(300, 450, 300, 600, GetColor(255, 255, 255));	// �E
	//DrawLineAA(50, 350, 50, 680, GetColor(255, 255, 255));	// ��

	//DrawLineAA(300, 600, 900, 600, GetColor(255, 255, 255));	// �E
	//DrawLineAA(50, 680, 820, 680, GetColor(255, 255, 255));	// ��
	//DrawLineAA(900, 600, 900, 780, GetColor(255, 255, 255));	// �E
	//DrawLineAA(820, 680, 820, 700, GetColor(255, 255, 255));	// ��
	//DrawLineAA(900, 780, 125, 780, GetColor(255, 255, 255));	// �E
	//DrawLineAA(820, 700, 50, 700, GetColor(255, 255, 255));	// ��
	//DrawLineAA(125, 780, 125, 915, GetColor(255, 255, 255));	// �E
	//DrawLineAA(50, 700, 50, 990, GetColor(255, 255, 255));	// ��
	//DrawLineAA(125, 915, 990, 915, GetColor(255, 255, 255));	// �E
	//DrawLineAA(50, 990, 990, 990, GetColor(255, 255, 255));	// ��

	//// �S�[���g
	//DrawLineAA(860, 915, 990, 915, GetColor(255, 255, 255));		// �E
	//DrawLineAA(860, 990, 990, 990, GetColor(255, 255, 255));		// ��
	//DrawLineAA(990, 915, 990, 990, GetColor(255, 255, 255));		// �E
}