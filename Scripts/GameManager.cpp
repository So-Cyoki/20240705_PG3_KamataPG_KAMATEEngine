#include "GameManager.h"

GameManager::GameManager()
{
	_sceneArr[static_cast<int>(SCENE::Title)] = std::make_unique<TitleScene>();
	_sceneArr[static_cast<int>(SCENE::Stage)] = std::make_unique<StageScene>();
	_sceneArr[static_cast<int>(SCENE::Clear)] = std::make_unique<ClearScene>();

	//_prevSceneNo = 0;
	_currentSceneNo = static_cast<int>(SCENE::Title);
}

GameManager::~GameManager()
{
}

int GameManager::Run(char keys[], char preKeys[]) {


	while (Novice::ProcessMessage() == 0) {
		Novice::BeginFrame();//フレーム開始

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		//シーンのチェック
		_prevSceneNo = _currentSceneNo;
		_currentSceneNo = _sceneArr[_currentSceneNo]->GetSceneNo();

		//シーン変更チェック
		if (_prevSceneNo != _currentSceneNo) {
			_sceneArr[_currentSceneNo]->Init();
		}

		//更新処理
		_sceneArr[_currentSceneNo]->Update(keys, preKeys);//シーンごとの更新処理

		//描画処理
		_sceneArr[_currentSceneNo]->Draw();

		Novice::EndFrame(); //フレーム終了

		//ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}

	}
	return 0;
}
