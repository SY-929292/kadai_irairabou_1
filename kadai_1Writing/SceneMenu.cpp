#include "DxLib.h"

#include "SceneMenu.h"
#include "SceneMain.h"
#include "SceneResult.h"
#include "game.h"

void SceneMenu::init()
{
	m_textPosY = 350;
	m_textVecY = 400;

	m_isEnd = false;
}

SceneBase* SceneMenu::update()
{
	int padState = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	if (padState & PAD_INPUT_2)
	{
		// mainに切り替え
		return(new SceneMain);
	}
	
	return this;
}

void SceneMenu::draw()
{
	int brightness = 0;
	LONGLONG  count = GetNowHiPerformanceCount();
	while(GetNowHiPerformanceCount() - count < 60000)
	{	
		DrawString(200, 450, "壁などに触れるとスタート地点に戻ってしまう", GetColor(255, 255, 255));
		DrawString(600, 450, "触れないように慎重にゴールへ向かおう", GetColor(255, 255, 255));
		DrawString(400, 850, "ESCボタン、Xボタンで強制終了します。", GetColor(255, 255, 255));

		// コメントの点滅

		if (brightness == 0)
		{
			brightness++;
		}
		else
		{
			brightness = 0;
		}
		

		if (brightness == 0)
		{
			DrawString(Game::kScreenWidth / 2, Game::kScreenHeight / 2,  "Bボタンを押してスタート", GetColor(255, 255, 255));
		}
		else
		{
			DrawString(Game::kScreenWidth / 2, Game::kScreenHeight / 2, "Bボタンを押してスタート", GetColor(125, 125, 125));
		}
	}
}