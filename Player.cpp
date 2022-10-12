#include "Player.h"
#include <cassert>
#include"Procession.h"

void Player::Initialize(Model* model, Sprite* sprite, uint32_t textureHandle)
{
	HeightFlag = true;

	WidthFlag = false;

	assert(model);

	assert(sprite);

	model_ = model;

	textureHandle_ = TextureManager::Load("mario.jpg");

	

	debugText_ = DebugText::GetInstance();

	input_ = Input::GetInstance();

	worldTransform_.Initialize();

	worldTransform_.translation_ = { 0,3,100 };
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

	// s—ñXV
	worldTransform_.matWorld_ = Mat_Identity();
	worldTransform_.matWorld_ = MatWorld(worldTransform_.scale_, worldTransform_.rotation_, worldTransform_.translation_);

	worldTransform_.matWorld_ *= worldTransform_.parent_->matWorld_;

	worldTransform_.TransferMatrix();
}

void Player::Draw(ViewProjection& viewProjection_)
{
	sprite_ = Sprite::Create(textureHandle_, { worldTransform_.translation_.x,worldTransform_.translation_.y });
	//model_->Draw(worldTransform_, viewProjection_, textureHandle_);
}
