#pragma once
#include "Maze.h"
#include "SceneBase.h"
#include "Player.h"

class SceneMain : public SceneBase
{
public:
	SceneMain();
	virtual ~SceneMain() {}

	// 初期化
	virtual void init() override;
	// 終了処理
	virtual void end() override {}

	// 毎フレームの処理
	virtual SceneBase* update() override;
	// 毎フレームの描画
	virtual void draw() override;
	

private:
	
	// 迷路
	Maze m_Maze;
	// プレイヤー
	Player m_player;

	// プレイヤーのグラフィックハンドル
	int m_hPlayerGraphic;

	// 背景のグラフィックハンドル
	int m_hBackGraphic;
};