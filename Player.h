#pragma once
#include "Audio.h"
#include "DirectXCommon.h"
#include "DebugText.h"
#include "Input.h"
#include "Model.h"
#include "Sprite.h"
#include "ViewProjection.h"
#include "WorldTransform.h"

class Player
{
public:
	/// <summary>
	/// ������
	/// </summary>
	void Initialize(Model* model, Sprite* sprite, uint32_t textureHandle);

	/// <summary>
	/// �X�V
	/// </summary>
	void Update();

	/// <summary>
	/// �`��
	/// </summary>
	void Draw(ViewProjection& viewProjection_);

private:
	WorldTransform worldTransform_;

	DebugText* debugText_ = nullptr;

	Input* input_ = nullptr;

	Model* model_ = nullptr;

	Sprite* sprite_ = nullptr;

	uint32_t textureHandle_ = 0u;

	// �c�t���O
	bool HeightFlag;

	// ���t���O
	bool WidthFlag;
};
