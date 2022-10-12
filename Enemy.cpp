#include "Enemy.h"
#include "Audio.h"
#include "DirectXCommon.h"
#include "DebugText.h"
#include "Input.h"
#include "Model.h"
#include "SafeDelete.h"
#include "Sprite.h"
#include "ViewProjection.h"
#include "WorldTransform.h"

void Enemy::EnemyInitialize()
{
	textureHandleEnemy_ = TextureManager::Load("enemy.png");
	modelEnemy_ = Model::Create();
	worldtransformEnemy_.scale_ = { 0.5f,0.5f,0.5f };
	worldtransformEnemy_.Initialize();
}

void Enemy::EnemyUpdate()
{
	worldtransformEnemy_.TransferMatrix();
}

void Enemy::EnemyBorn()
{
	if (enemyflag_ == 0)
	{
		enemyflag_ = 1;
		worldtransformEnemy_.translation_.z = 40;
		worldtransformEnemy_.translation_.y = 0;
	}
}

void Enemy::Draw(ViewProjection& viewProjection_)
{
	if (enemyflag_ == 1)
	{
		modelEnemy_->Draw(worldtransformEnemy_,viewProjection_, textureHandleEnemy_);
	}
}
