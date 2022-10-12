#pragma once
#include "Audio.h"
#include "DirectXCommon.h"
#include "DebugText.h"
#include "Input.h"
#include "Model.h"
#include "SafeDelete.h"
#include "Sprite.h"
#include "ViewProjection.h"
#include "WorldTransform.h"

class Enemy
{
public:
	void EnemyInitialize();
	void EnemyUpdate();
	void EnemyBorn();
	void Draw(ViewProjection& viewProjection_);

protected:
	uint32_t textureHandleEnemy_ = 0;
	Model* modelEnemy_ = nullptr;
	WorldTransform worldtransformEnemy_;
	int enemyflag_ = 1;
};
