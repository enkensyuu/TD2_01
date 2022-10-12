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
	/// 初期化
	/// </summary>
	void Initialize(Model* model, Sprite* sprite, uint32_t textureHandle);

	/// <summary>
	/// 更新
	/// </summary>
	void Update();

	/// <summary>
	/// 描画
	/// </summary>
	void Draw(ViewProjection& viewProjection_);

private:
	WorldTransform worldTransform_;

	DebugText* debugText_ = nullptr;

	Input* input_ = nullptr;

	Model* model_ = nullptr;

	Sprite* sprite_ = nullptr;

	uint32_t textureHandle_ = 0u;

	// 縦フラグ
	bool HeightFlag;

	// 横フラグ
	bool WidthFlag;
};
