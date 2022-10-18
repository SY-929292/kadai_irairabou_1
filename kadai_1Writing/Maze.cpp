#include"DXLib.h"
#include "Maze.h"

void Maze::init()
{
	
}

void Maze::draw()
{
	// ボックスの表示
	// 大きい外枠
	DrawBox(50, 50, 940, 950, GetColor(255, 255, 255), false);

	// 1
	DrawBox(50, 150, 800, 350, GetColor(255, 255, 255), true);

	// 2
	DrawBox(150, 440, 940, 545, GetColor(255, 255, 255), true);

	// 3
	DrawBox(50, 630, 900, 695, GetColor(255, 255, 255), true);

	// 4
	//DrawBox(, , 900, 695, GetColor(255, 255, 255), false);



	//// スタート位置枠
	// ラインの表示
	//DrawLineAA(50, 50, 150, 50, );		// 右
	//DrawLineAA(50, 50, 50, 150, GetColor(255, 255, 255));		// 左
	//DrawLineAA(150, 50, 150, 50, GetColor(255, 255, 255));		// 右

	////通行範囲
	//DrawLineAA(50, 150, 800, 150, GetColor(255, 255, 255));		// 右
	//DrawLineAA(150, 50, 900, 50, GetColor(255, 255, 255));		// 左
	//DrawLineAA(900, 50, 900, 450, GetColor(255, 255, 255));		// 右
	//DrawLineAA(800, 150, 800, 350, GetColor(255, 255, 255));	// 左
	//DrawLineAA(900, 450, 300, 450, GetColor(255, 255, 255));	// 右
	//DrawLineAA(800, 350, 50, 350, GetColor(255, 255, 255));	// 左
	//DrawLineAA(300, 450, 300, 600, GetColor(255, 255, 255));	// 右
	//DrawLineAA(50, 350, 50, 680, GetColor(255, 255, 255));	// 左

	//DrawLineAA(300, 600, 900, 600, GetColor(255, 255, 255));	// 右
	//DrawLineAA(50, 680, 820, 680, GetColor(255, 255, 255));	// 左
	//DrawLineAA(900, 600, 900, 780, GetColor(255, 255, 255));	// 右
	//DrawLineAA(820, 680, 820, 700, GetColor(255, 255, 255));	// 左
	//DrawLineAA(900, 780, 125, 780, GetColor(255, 255, 255));	// 右
	//DrawLineAA(820, 700, 50, 700, GetColor(255, 255, 255));	// 左
	//DrawLineAA(125, 780, 125, 915, GetColor(255, 255, 255));	// 右
	//DrawLineAA(50, 700, 50, 990, GetColor(255, 255, 255));	// 左
	//DrawLineAA(125, 915, 990, 915, GetColor(255, 255, 255));	// 右
	//DrawLineAA(50, 990, 990, 990, GetColor(255, 255, 255));	// 左

	//// ゴール枠
	//DrawLineAA(860, 915, 990, 915, GetColor(255, 255, 255));		// 右
	//DrawLineAA(860, 990, 990, 990, GetColor(255, 255, 255));		// 左
	//DrawLineAA(990, 915, 990, 990, GetColor(255, 255, 255));		// 右
}