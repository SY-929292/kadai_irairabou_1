#pragma once

#include"Vec2.h"
#include"SceneResult.h"

class Maze
{
public:
	Maze(){}
	virtual ~Maze() {}

	virtual void init();

	// �O���t�B�b�N�f�[�^�ݒ�
	void setHandle(int background, int boxhandle);

	// �O�g�̃|�W�V����
	Vec2 getPosOut() const { return m_outPos; }
	// �O�g�̃T�C�Y
	Vec2 getSizeOut() const { return m_outSize; }

	// �O�g�̃|�W�V����
	Vec2 getPosBox1() const { return m_pos1; }
	// �O�g�̃T�C�Y
	Vec2 getSizeBox1() const { return m_size1; }

	// �O�g�̃|�W�V����
	Vec2 getPosBox2() const { return m_pos2; }
	// �O�g�̃T�C�Y
	Vec2 getSizeBox2() const { return m_size2; }

	// �O�g�̃|�W�V����
	Vec2 getPosBox3() const { return m_pos3; }
	// �O�g�̃T�C�Y
	Vec2 getSizeBox3() const { return m_size3; }

	// �O�g�̃|�W�V����
	Vec2 getPosBox4() const { return m_pos4; }
	// �O�g�̃T�C�Y
	Vec2 getSizeBox4() const { return m_size4; }

	// �O�g�̃|�W�V����
	Vec2 getPosGoal() const { return m_goalPos; }
	// �O�g�̃T�C�Y
	Vec2 getSizeGoal() const { return m_goalSize; }

	virtual void draw ();

private:
	
	// �w�i�̃n���h��
	int m_background;

	// �{�b�N�X�̃n���h��
	int m_boxHandle;

	// �O�g�̕\���ʒu
	Vec2 m_outPos;

	// box1�̕\���ʒu
	Vec2 m_pos1;

	// box2�̕\���ʒu
	Vec2 m_pos2;

	// box3�̕\���ʒu
	Vec2 m_pos3;

	// box4�̕\���ʒu
	Vec2 m_pos4;

	// �S�[���̕\���ʒu
	Vec2 m_goalPos;

	// �O�g�̃T�C�Y
	Vec2 m_outSize;

	// box1�̃T�C�Y
	Vec2 m_size1;

	// box2�̃T�C�Y
	Vec2 m_size2;

	// box3�̃T�C�Y
	Vec2 m_size3;

	// box4�̃T�C�Y
	Vec2 m_size4;

	// �S�[���̃T�C�Y
	Vec2 m_goalSize;

};