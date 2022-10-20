#include "DxLib.h"

#include "Maze.h"
#include "SceneMain.h"
#include "SceneMenu.h"
#include "SceneResult.h"

SceneMain::SceneMain()
{
	m_hPlayerGraphic = -1; // プレイヤーグラフィックハンドルの初期化
	m_hBackGraphic = -1; // 背景グラフィックハンドルの初期化
}

void SceneMain::init()
{
	m_hPlayerGraphic = LoadGraph("irasuto/Player.bmp");
	m_hBackGraphic = LoadGraph("irasuto/back.png");

	m_player.setHandlePlayer(m_hPlayerGraphic);
	m_player.init();
	m_player.setMain(this);

	m_Maze.init();
	m_Maze.setMain(this);
}

SceneBase* SceneMain::update()
{
	m_player.update();

	

	int padState = GetJoypadInputState(DX_INPUT_KEY_PAD1);

	if (!m_player.isCol(m_Maze))
	{
		if (m_player.getPos().x + m_player.getSize().x > m_Maze.getPosGoal().x && m_player.getPos().y > m_Maze.getPosGoal().y)
		{
			// シーン切り替え
			return(new SceneResult);
		}
		else
		{
			m_player.init();
		}
	}
	

	return this;
}


void SceneMain::draw()
{
	DrawString(60, 60, "スタート", GetColor(255, 255, 255));
	DrawString(900, 970, "ゴール", GetColor(255, 255, 255));
	m_Maze.draw();
	// 背景のグラフィック
	DrawGraph(Game::kScreenWidth, Game::kScreenHeight, m_hBackGraphic, true);
	m_player.draw();

}

void SceneMain::end()
{
	// プレイヤーの画像データ削除
	DeleteGraph(m_hPlayerGraphic);

	// 背景の画像データ削除
	DeleteGraph(m_hBackGraphic);


}
