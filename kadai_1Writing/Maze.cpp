#include"DXLib.h"
#include "Maze.h"

void Maze::init()
{
	
}

void Maze::draw()
{
	// �{�b�N�X�̕\��
	// �傫���O�g
	DrawBox(50, 50, 940, 950, GetColor(255, 255, 255), false);

	// 1
	DrawBox(50, 150, 800, 350, GetColor(255, 255, 255), true);

	// 2
	DrawBox(150, 440, 940, 545, GetColor(255, 255, 255), true);

	// 3
	DrawBox(50, 630, 900, 695, GetColor(255, 255, 255), true);

	// 4
	//DrawBox(, , 900, 695, GetColor(255, 255, 255), false);



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