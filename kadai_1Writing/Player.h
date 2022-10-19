#pragma once

#include "Vec2.h"
#include "Maze.h"

class SceneMain;
class Maze;

class Player
{
public:
	Player();
	virtual ~Player();

	// グラフィックデータ設定
	void setHandle(int handle);

	// プレイヤーの初期化
	void init();

	// SceneMainクラスのポインタ設定
	void setMain(SceneMain* pMain) { m_pMain = pMain; }

	// 処理
	void update();
	// 描画
	void draw();
	// 車との衝突判定
	bool isCol(Maze& Maze);

	// 位置の取得
	Vec2 getPos() const { return m_pos; }
	// サイズの取得
	//Vec2 getGraphSize() const { return m_graphSize; }

	Vec2 getSize() const { return m_size; }

	// 死亡設定
	void setDead(bool isDead) { m_isDead = isDead; }

private:
	int m_handle;

	// 生死
	bool m_isDead;

	// SceneMainのポインタ
	SceneMain* m_pMain;

	// 表示位置
	Vec2 m_pos;
	// 移動
	Vec2 m_vec;
	// サイズ（幅）
	Vec2 m_size;
};