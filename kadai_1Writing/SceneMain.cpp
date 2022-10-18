#include "DxLib.h"

#include "Maze.h"
#include "SceneMain.h"
#include "SceneMenu.h"
#include "SceneResult.h"

namespace
{
	const char* const kPlayerGraphFilename = "GameGraphic/Player.bmp";
}

SceneMain::SceneMain()
{
	m_hPlayerGraphic = -1;
}

void SceneMain::init()
{
	m_hPlayerGraphic = LoadGraph("irasuto/Player.bmp");

	m_player.setHandle(m_hPlayerGraphic);
	m_player.init();
	m_player.setMain(this);
	
}

SceneBase* SceneMain::update()
{
	m_player.update();



	int padState = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	
	/*if (padState & PAD_INPUT_3)
	{
		if ()
		{
			return(new SceneResult);
		}
		else
		{
			return (new SceneMenu);
		}
	}*/
	

	return this;
}


void SceneMain::draw()
{
	DrawString(60, 60, "スタート", GetColor(255, 255, 255));
	DrawString(900, 970, "ゴール", GetColor(255, 255, 255));

	m_player.draw();
	m_Maze.draw();
}