#include <DxLib.h>

#include "game.h"
#include "player.h"

#include "SceneMain.h"

namespace
{
	// X�����AY�����̍ő呬�x
	constexpr float kSpeedMax = 7.0f;
	constexpr float kAcc = 0.9f;

}

Player::Player()
{
	m_handle = -1;
	m_pMain = nullptr;

}

Player::~Player()
{

}

void Player::setHandle(int handle)
{
	m_handle = handle;
	GetGraphSizeF(m_handle, &m_size.x, &m_size.y);

}

void Player::init()
{
	m_pos.x = 80.0f;
	m_pos.y = 80.0f;
	/*m_size.x = 0.0f;
	m_size.y = 0.0f;*/
	m_vec.x = 0.0f;
	m_vec.y = 0.0f;
}

void Player::update()
{

	// �p�b�h(�������̓L�[�{�[�h)����̓��͂��擾����
	int padState = GetJoypadInputState(DX_INPUT_KEY_PAD1);

	if (padState & PAD_INPUT_UP)
	{
		m_vec.y -= kAcc;
		if (m_vec.y < -kSpeedMax)	m_vec.y = -kSpeedMax;
	}
	else if (padState & PAD_INPUT_DOWN)
	{
		m_vec.y += kAcc;
		if (m_vec.y > kSpeedMax)	m_vec.y = kSpeedMax;
	}
	else
	{
		m_vec.y *= 0.9f;
	}
	if (padState & PAD_INPUT_LEFT)
	{
		m_vec.x -= kAcc;
		if (m_vec.x < -kSpeedMax)	m_vec.x = -kSpeedMax;
	}
	else if (padState & PAD_INPUT_RIGHT)
	{
		m_vec.x += kAcc;
		if (m_vec.x > kSpeedMax)	m_vec.x = kSpeedMax;
	}
	else
	{
		m_vec.x *= 0.9f;
	}
	m_pos += m_vec;

	// Player�s���͈͐���
	// 
	// 
	// �X�^�[�g�ʒu
	// ���C���̔���
	//if (m_pos.x < 50) // �P
	//{
	//	m_pos.x = 50;
	//}
	//if (m_pos.y < 50)// �Q�A�V�A�P�T
	//{
	//	m_pos.y = 50;
	//}
	//if (m_pos.y < 915 && m_pos.x + kGraphicSizeX > 900) // �T�A�P�R
	//{
	//	m_pos.x = 900 - kGraphicSizeX;
	//}
	//if(m_pos.x < 800 && m_pos.y + kGraphicSizeY > 150 && m_pos.y <150) // �R
	//{
	//	m_pos.y = 150 - kGraphicSizeY;
	//}
	//if (m_pos.y + kGraphicSizeY > 150 && m_pos.y < 350 && m_pos.x < 800) // �U
	//{
	//	m_pos.y = 350;
	//	//m_pos.x = 800;
	//}

	//if (m_pos.x + kGraphicSizeX > 300 && m_pos.y + kGraphicSizeY > 450 && m_pos.y < 450) // �W
	//{
	//	m_pos.y = 450 - kGraphicSizeY;
	//}

	//if (m_pos.x < 800 && m_pos.y < 350 && m_pos.y + kGraphicSizeY > 350 )
	//{
	//	m_pos.y = 350;
	//}

	/*if (m_pos.x > 150 - m_size.x)
	{
		m_pos.x = 150 - m_size.x;
	}
	if (m_pos.y > 150 - m_size.y)
	{
		m_pos.y = 150 - m_size.y;
	}
	*/
	
}


void Player::draw()
{
	//if (m_isDead) return;
	DrawGraphF(m_pos.x, m_pos.y, m_handle, true);
}

bool Player::isCol(Player& player)
{
	return 0;
}