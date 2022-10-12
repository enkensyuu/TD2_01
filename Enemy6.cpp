#include "Enemy6.h"
#include "Audio.h"
#include "DirectXCommon.h"
#include "DebugText.h"
#include "Input.h"
#include "Model.h"
#include "SafeDelete.h"
#include "Sprite.h"
#include "ViewProjection.h"
#include "WorldTransform.h"

void Enemy6::EnemyInitialize()
{
	worldtransformEnemy_.TransferMatrix();
}

void Enemy6::EnemyUpdate()
{
	enemyflag_ = 1;
	worldtransformEnemy_.translation_.z = 40;
	worldtransformEnemy_.translation_.y = 0;
}

void Enemy6::EnemyBorn()
{
	if (enemyflag_ == 0)
	{
		enemyflag_ = 1;
		worldtransformEnemy_.translation_.z = 40;
		worldtransformEnemy_.translation_.y = 0;
	}
}

void Enemy6::Draw(ViewProjection& viewProjection_)
{
	if (enemyflag_ == 1)
	{
		modelEnemy_->Draw(worldtransformEnemy_, viewProjection_, textureHandleEnemy_);
	}
}
