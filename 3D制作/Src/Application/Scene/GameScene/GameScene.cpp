#include "GameScene.h"
#include"../SceneManager.h"

#include "../../GameObject/Camera/FPSCamera/FPSCamera.h"

#include "../../GameObject/Terrains/Ground/Ground.h"
#include "../../GameObject/Terrains/House/House.h"

#include "../../GameObject/Character/Player/Player.h"

void GameScene::Event()
{
	if (GetAsyncKeyState('T') & 0x8000)
	{
		SceneManager::Instance().SetNextScene
		(
			SceneManager::SceneType::Title
		);
	}
}

void GameScene::Init()
{
	// 地形 地面
	std::shared_ptr<Ground> ground = std::make_shared<Ground>();
	m_objList.push_back(ground);

	// 地形 周囲の家
	std::shared_ptr<House> house = std::make_shared<House>();
	m_objList.push_back(house);

	// プレイヤー
	std::shared_ptr<Player> player = std::make_shared<Player>();
	m_objList.push_back(player);

	// FPSカメラ
	std::shared_ptr<FPSCamera> camera = std::make_shared<FPSCamera>();
	m_objList.push_back(camera);

	// 各オブジェクトに必要なデータを渡しておく
	camera->SetTarget(player);	// カメラに注視対象(プレイヤー)をセット
}
