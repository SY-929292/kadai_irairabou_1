#pragma once
#include "SceneBase.h"

class SceneMenu : public SceneBase
{
public:
	SceneMenu()
	{
		m_textPosY = 400;
		m_textVecY = 0;
		m_isEnd = false;
	}
	virtual ~SceneMenu() {}


	virtual void init() override;
	virtual void end() override {}

	virtual SceneBase* update() override;
	virtual void draw() override;

	virtual bool isEnd() { return m_isEnd; }
private:
	// テキスト表示位置変更
	int m_textPosY;
	int m_textVecY;

	bool m_isEnd;
}; 