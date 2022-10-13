#pragma once

#include "Vec2.h"

class Player
{
public:
	// �萔��`

	// �O���t�B�b�N�f�[�^������
	// �v���C���[�O���t�B�b�N������

	// �v���C���[�O���t�B�b�N�T�C�Y
	static constexpr int kGraphicSizeX = 32;
	static constexpr int kGraphicSizeY = 32;

public:
	Player();
	virtual ~Player();

	// �O���t�B�b�N�f�[�^�ݒ�
	void setHandle(int index, int handle) { m_handle = handle; }

	// �v���C���[�̏�����
	void init();

	// ����
	void update();
	// �`��
	void draw();

private:
	int m_handle;

	// �\���ʒu
	Vec2 m_pos;
	// �ړ�
	Vec2 m_vec;

	// �L�����N�^�[�A�j���[�V����
	int m_animeNo;
	int m_animeFrame;
	int m_dirNo;
};