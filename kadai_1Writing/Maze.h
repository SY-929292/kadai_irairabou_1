#pragma once

#include"Vec2.h"
#include"SceneResult.h"

class Maze
{
public:
	Maze(){}
	virtual ~Maze() {}

	virtual void init();

	// グラフィックデータ設定
	void setHandle(int background, int boxhandle);

	// 外枠のポジション
	Vec2 getPosOut() const { return m_outPos; }
	// 外枠のサイズ
	Vec2 getSizeOut() const { return m_outSize; }

	// 外枠のポジション
	Vec2 getPosBox1() const { return m_pos1; }
	// 外枠のサイズ
	Vec2 getSizeBox1() const { return m_size1; }

	// 外枠のポジション
	Vec2 getPosBox2() const { return m_pos2; }
	// 外枠のサイズ
	Vec2 getSizeBox2() const { return m_size2; }

	// 外枠のポジション
	Vec2 getPosBox3() const { return m_pos3; }
	// 外枠のサイズ
	Vec2 getSizeBox3() const { return m_size3; }

	// 外枠のポジション
	Vec2 getPosBox4() const { return m_pos4; }
	// 外枠のサイズ
	Vec2 getSizeBox4() const { return m_size4; }

	// 外枠のポジション
	Vec2 getPosGoal() const { return m_goalPos; }
	// 外枠のサイズ
	Vec2 getSizeGoal() const { return m_goalSize; }

	virtual void draw ();

private:
	
	// 背景のハンドル
	int m_background;

	// ボックスのハンドル
	int m_boxHandle;

	// 外枠の表示位置
	Vec2 m_outPos;

	// box1の表示位置
	Vec2 m_pos1;

	// box2の表示位置
	Vec2 m_pos2;

	// box3の表示位置
	Vec2 m_pos3;

	// box4の表示位置
	Vec2 m_pos4;

	// ゴールの表示位置
	Vec2 m_goalPos;

	// 外枠のサイズ
	Vec2 m_outSize;

	// box1のサイズ
	Vec2 m_size1;

	// box2のサイズ
	Vec2 m_size2;

	// box3のサイズ
	Vec2 m_size3;

	// box4のサイズ
	Vec2 m_size4;

	// ゴールのサイズ
	Vec2 m_goalSize;

};