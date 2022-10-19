#pragma once
#include "Maze.h"
#include "SceneBase.h"
#include "Player.h"

class SceneMain : public SceneBase
{
public:
	SceneMain();
	virtual ~SceneMain() {}

	// ������
	virtual void init() override;
	// �I������
	virtual void end() override {}

	// ���t���[���̏���
	virtual SceneBase* update() override;
	// ���t���[���̕`��
	virtual void draw() override;
	

private:
	
	// ���H
	Maze m_Maze;
	// �v���C���[
	Player m_player;

	// �v���C���[�̃O���t�B�b�N�n���h��
	int m_hPlayerGraphic;

	// �w�i�̃O���t�B�b�N�n���h��
	int m_hBackGraphic;
};