#include"DXLib.h"
#include "Maze.h"

void Maze::draw()
{
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