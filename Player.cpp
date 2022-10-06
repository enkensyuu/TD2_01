#include "Player.h"
#include <cassert>

void Player::Initialize(Model* model, uint32_t textureHandle)
{
	HeightFlag = 1;

	WidthFlag = 0;

	assert(model);

	model_ = model;

	textureHandle_ = TextureManager::Load("mario.jpg");

	debugText_ = DebugText::GetInstance();

	input_ = Input::GetInstance();

	worldTransform_->Initialize();

	worldTransform_->translation_ = { 0,3,100 };
}

void Player::Update()
{
	Vector3 move = { 0,0,0 };

	const float Speed = 0.2f;

	if (input_->PushKey(DIK_SPACE))
	{
		if (HeightFlag == 1)
		{
			move.y += Speed;
		}
	}
}

void Player::Draw(ViewProjection& viewProjection_)
{
	model_->Draw(worldTransform_, viewProjection_,textureHandle_);
}
