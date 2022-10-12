#pragma once
#include "Enemy.h"
class Enemy3 :public Enemy
{
public:
public:
	void EnemyInitialize();
	void EnemyUpdate();
	void EnemyBorn();
	void Draw(ViewProjection& viewProjection_);

};
