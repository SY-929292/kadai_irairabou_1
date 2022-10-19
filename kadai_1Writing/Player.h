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

	// �O���t�B�b�N�f�[�^�ݒ�
	void setHandle(int handle);

	// �v���C���[�̏�����
	void init();

	// SceneMain�N���X�̃|�C���^�ݒ�
	void setMain(SceneMain* pMain) { m_pMain = pMain; }

	// ����
	void update();
	// �`��
	void draw();
	// �ԂƂ̏Փ˔���
	bool isCol(Maze& Maze);

	// �ʒu�̎擾
	Vec2 getPos() const { return m_pos; }
	// �T�C�Y�̎擾
	//Vec2 getGraphSize() const { return m_graphSize; }

	Vec2 getSize() const { return m_size; }

	// ���S�ݒ�
	void setDead(bool isDead) { m_isDead = isDead; }

private:
	int m_handle;

	// ����
	bool m_isDead;

	// SceneMain�̃|�C���^
	SceneMain* m_pMain;

	// �\���ʒu
	Vec2 m_pos;
	// �ړ�
	Vec2 m_vec;
	// �T�C�Y�i���j
	Vec2 m_size;
};