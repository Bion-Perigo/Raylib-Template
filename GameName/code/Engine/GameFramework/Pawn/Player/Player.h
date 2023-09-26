#include "raylib.h"

class APlayer
{
public:

    APlayer(int X, int Y);

    void BeginPlayer();

    void Tick(float DeltaTime);

private:

    Texture2D m_sprite;
    Vector2 m_location;
    float m_speed{450.f};

};