//#include "DxLib.h"
//
////#include "mouse.h"
//#include "SceneResult.h"
//#include "pad.h"
//
//void SceneResult::init()
//{
//	m_textPosY = 0;
//	m_textVecY = 4;
//
//	m_isEnd = false;
//}
//
//void SceneResult::update()
//{
//	// •¶Žš‚ÌˆÚ“®
//	m_textPosY += m_textVecY;
//	if (m_textPosY < 0)
//	{
//		m_textPosY = 4;
//		m_textVecY = 0;
//	}
//	if (m_textPosY > 300)
//	{
//		m_textPosY = 300;
//		m_textVecY = -4;
//	}
//
//	if (Pad::isTrigger(PAD_INPUT_1))
//	{
//		m_isEnd = true;
//	}
//}
//
//void SceneResult::draw()
//{
//	DrawString(m_textPosY, 0, "ƒŠƒUƒ‹ƒg",GetColor(255, 255, 255));
//}