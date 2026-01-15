#pragma once

#include <UniDx.h>

using namespace UniDx;

namespace UniDx
{
    class Scene;
    class TextMesh;
}

class MainGame : public UniDx::Singleton<MainGame>
{
public:
    virtual ~MainGame();

    void AddScore(int n);

    void AddTime(float n);

    bool CheckCoin(int c);

    unique_ptr<UniDx::Scene> CreateScene();

protected:
    int score = 0;
    float timer = 0.0f;
    int CoinCount = 0;
    int MissionCoin = 10;
    unique_ptr<UniDx::GameObject> mapObj;
    UniDx::TextMesh* scoreTextMesh;
    UniDx::TextMesh* timeTextMesh;

    void createMap();
};