#pragma once
#include <Novice.h>

enum class SCENE { Title, Stage, Clear };

class IScene
{
protected:
	static int sceneNo;//シーンの切り替え機能の番号

public:
	virtual void Init() = 0;
	virtual void Update(char keys[], char preKeys[]) = 0;
	virtual void Draw() = 0;

	virtual ~IScene();

	int GetSceneNo() { return static_cast<int>(sceneNo); };

};

