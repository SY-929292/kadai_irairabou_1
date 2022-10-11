#pragma once
#include "SceneBase.h"

class SceneFinish : public SceneBase
{
public:
	SceneFinish()
	{
		m_textPosX = 0;
		m_textPosY = 0;
		m_textVecX = 0;
		m_textVecY = 0;
		m_isEnd = false;
	}
	virtual ~SceneFinish() {}

	virtual void init() override;
	virtual void end() override {}

	virtual SceneBase* update() override;
	virtual void draw() override;

	virtual bool isEnd() { return m_isEnd; }
private:
	// テキスト表示位置変更
	int m_textPosX;
	int m_textPosY;
	int m_textVecX;
	int m_textVecY;

	bool m_isEnd;
};