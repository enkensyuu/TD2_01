#pragma once
#include "Enemy.h"
class Enemy6 :public Enemy
{
public:
	void EnemyInitialize();
	void EnemyUpdate();
	void EnemyBorn();
	void Draw(ViewProjection& viewProjection_);
};

