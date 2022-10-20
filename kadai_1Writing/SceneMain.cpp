#include "DxLib.h"

#include "Maze.h"
#include "SceneMain.h"
#include "SceneMenu.h"
#include "SceneResult.h"

SceneMain::SceneMain()
{
	m_hPlayerGraphic = -1; // �v���C���[�O���t�B�b�N�n���h���̏�����
	m_hBackGraphic = -1; // �w�i�O���t�B�b�N�n���h���̏�����
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
			// �V�[���؂�ւ�
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
	DrawString(60, 60, "�X�^�[�g", GetColor(255, 255, 255));
	DrawString(900, 970, "�S�[��", GetColor(255, 255, 255));
	m_Maze.draw();
	// �w�i�̃O���t�B�b�N
	DrawGraph(Game::kScreenWidth, Game::kScreenHeight, m_hBackGraphic, true);
	m_player.draw();

}

void SceneMain::end()
{
	// �v���C���[�̉摜�f�[�^�폜
	DeleteGraph(m_hPlayerGraphic);

	// �w�i�̉摜�f�[�^�폜
	DeleteGraph(m_hBackGraphic);


}
