#pragma once

#include "Vec2.h"

class Player
{
public:
	// 定数定義

	// グラフィックデータ分割数
	// プレイヤーグラフィック分割数

	// プレイヤーグラフィックサイズ
	static constexpr int kGraphicSizeX = 32;
	static constexpr int kGraphicSizeY = 32;

public:
	Player();
	virtual ~Player();

	// グラフィックデータ設定
	void setHandle(int index, int handle) { m_handle = handle; }

	// プレイヤーの初期化
	void init();

	// 処理
	void update();
	// 描画
	void draw();

private:
	int m_handle;

	// 表示位置
	Vec2 m_pos;
	// 移動
	Vec2 m_vec;

	// キャラクターアニメーション
	int m_animeNo;
	int m_animeFrame;
	int m_dirNo;
};