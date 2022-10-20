#include <DxLib.h>

#include "game.h"
#include "player.h"
#include "Maze.h"

#include "SceneMain.h"

namespace
{
	// X方向、Y方向の最大速度
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

	// パッド(もしくはキーボード)からの入力を取得する
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
}


void Player::draw()
{
	DrawFormatString(0, 0, GetColor(255, 255, 255), "%f", getPos());
	//DrawFormatString(0, 10, GetColor(255, 255, 255), "%f", Maze::getPosOut());

	//if (m_isDead) return;

	DrawGraphF(m_pos.x, m_pos.y, m_handle, true);
}

bool Player::isCol(Maze& Maze)
{

	float playerLeft = getPos().x;
	float playerRight = getPos().x + getSize().x;
	float playerTop = getPos().y;
	float playerBottom = getPos().y + getSize().y;

	float outLineLeft = Maze.getPosOut().x;
	float outLineRight = Maze.getPosOut().x + Maze.getSizeOut().x;
	float outLineTop = Maze.getPosOut().y;
	float outLineBottom = Maze.getPosOut().y + Maze.getSizeOut().y;

	float LineBox1Left = Maze.getPosBox1().x;
	float LineBox1Right = Maze.getPosBox1().x + Maze.getSizeBox1().x;
	float LineBox1Top = Maze.getPosBox1().y;
	float LineBox1Bottom = Maze.getPosBox1().y + Maze.getSizeBox1().y;

	float LineBox2Left = Maze.getPosBox2().x;
	float LineBox2Right = Maze.getPosBox2().x + Maze.getSizeBox2().x;
	float LineBox2Top = Maze.getPosBox2().y;
	float LineBox2Bottom = Maze.getPosBox2().y + Maze.getSizeBox2().y;

	float LineBox3Left = Maze.getPosBox3().x;
	float LineBox3Right = Maze.getPosBox3().x + Maze.getSizeBox3().x;
	float LineBox3Top = Maze.getPosBox3().y;
	float LineBox3Bottom = Maze.getPosBox3().y + Maze.getSizeBox3().y;

	float LineBox4Left = Maze.getPosBox4().x;
	float LineBox4Right = Maze.getPosBox4().x + Maze.getSizeBox4().x;
	float LineBox4Top = Maze.getPosBox4().y;
	float LineBox4Bottom = Maze.getPosBox4().y + Maze.getSizeBox4().y;

	float LineGoalLeft = Maze.getPosGoal().x;
	float LineGoalRight = Maze.getPosGoal().x + Maze.getSizeGoal().x;
	float LineGoalTop = Maze.getPosGoal().y;
	float LineGoalBottom = Maze.getPosGoal().y + Maze.getSizeGoal().y;

	if (playerLeft < outLineLeft) { return false; }
	if (playerRight > outLineRight) { return false; }
	if (playerTop < outLineTop) { return false; }
	if (playerBottom > outLineBottom) { return false; }

	if (playerLeft < LineBox1Right && playerBottom > LineBox1Top && playerTop < LineBox1Bottom) { return false; }

	if (playerRight > LineBox2Left && playerBottom > LineBox2Top && playerTop < LineBox2Bottom) { return false; }

	if (playerLeft < LineBox3Right && playerBottom > LineBox3Top && playerTop < LineBox3Bottom) { return false; }

	if (playerRight > LineBox4Left && playerBottom > LineBox4Top && playerTop < LineBox4Bottom) { return false; }

	if (playerTop >= LineGoalTop && playerRight > LineGoalLeft) { return false; }

	return true;

}