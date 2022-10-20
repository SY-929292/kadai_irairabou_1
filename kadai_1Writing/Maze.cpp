#include"DXLib.h"
#include "Maze.h"

void Maze::init()
{
	// 外枠の表示位置
	m_outPos.x = 50;
	m_outPos.y = 50;

	// box1の表示位置
	m_pos1.x = 50;
	m_pos1.y = 150;

	// box2の表示位置
	m_pos2.x = 150;
	m_pos2.y = 440;

	// box3の表示位置
	m_pos3.x = 50;
	m_pos3.y = 630;

	// box4の表示位置
	m_pos4.x = 130;
	m_pos4.y = 780;

	// ゴールの表示位置
	m_goalPos.x = 860;
	m_goalPos.y = 870;

	// 外枠のサイズ
	m_outSize.x = 900;
	m_outSize.y = 900;

	// box1のサイズ
	m_size1.x = 750;
	m_size1.y = 200;

	// box2のサイズ
	m_size2.x = 800;
	m_size2.y = 105;

	// box3のサイズ
	m_size3.x = 800;
	m_size3.y = 60;

	// box4のサイズ
	m_size4.x = 820;
	m_size4.y = 90;

	// ゴールのサイズ
	m_goalSize.x = 90;
	m_goalSize.y = 80;
}

void Maze::draw()
{
	// 大きい外枠
	DrawBox(m_outPos.x, m_outPos.y, m_outPos.x + m_outSize.x, m_outPos.y + m_outSize.y, GetColor(255, 255, 255), false);

	// ボックス1
	DrawBox(m_pos1.x, m_pos1.y, m_pos1.x + m_size1.x, m_pos1.y + m_size1.y, GetColor(255, 255, 255), true);

	// ボックス2
	DrawBox(m_pos2.x, m_pos2.y, m_pos2.x + m_size2.x, m_pos2.y + m_size2.y, GetColor(255, 255, 255), true);

	// ボックス3
	DrawBox(m_pos3.x, m_pos3.y, m_pos3.x + m_size3.x, m_pos3.y + m_size3.y, GetColor(255, 255, 255), true);

	// ボックス4
	DrawBox(m_pos4.x, m_pos4.y, m_pos4.x + m_size4.x, m_pos4.y + m_size4.y, GetColor(255, 255, 255), true);

	// ゴール地点
	DrawBox(m_goalPos.x, m_goalPos.y, m_goalPos.x + m_goalSize.x, m_goalPos.y + m_goalSize.y, GetColor(0, 123, 255), true);

	
}