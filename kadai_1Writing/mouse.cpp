/*#include"DXlib.h"
#include"mouse.h"

namespace
{
	constexpr int kLogNum = 16;
	// 入力ログ　０が最新の状態
	int padLog[kLogNum];
}

namespace Pad
{
	// パッドの状態取得
	void  update()
	{
		// 現在のパッドの状態を取得
		int padState = GetJoypadInputState(DX_INPUT_KEY_PAD1);

		// ログの更新
		for (int i = kLogNum - 1; i >= 1; i--)
		{
			padLog[i] = padLog[i - 1];
		}
		padLog[0] = padState;
	}

	// 押下げ判定
	bool isPress(int button)
	{
		return (mouseLog[0] & button);
	}
	// トリガー判定
	bool isTrigger(int button)
	{
		bool isNow = (mouseLog[0] & button);// 現在の状態
		bool isLast = (mouseLog[1] & button);// １フレーム前の状態
		return (isNow && isLast);
	}
	// 離した判定
	bool isRelase(int button)
	{
		bool isNow = (mouseLog[0] & button);// 現在の状態
		bool isLast = (mouseLog[1] & button);// １フレーム前の状態
		return (!isNow && isLast);
	}
}*/