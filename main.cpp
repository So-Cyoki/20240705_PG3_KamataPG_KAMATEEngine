#include <Novice.h>
#include "Scripts/GameManager.h"

const char kWindowTitle[] = "GC2A_07_ソウ_チョウキ";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };

	//自分の変数
	GameManager* _gameManagerObj = new GameManager();

	_gameManagerObj->Run(keys, preKeys);

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
