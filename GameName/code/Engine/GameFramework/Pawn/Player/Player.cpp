#include "Player.h"

#define NO_EXPAND(a) #a
#define STR(a) NO_EXPAND(a)
#define FIND_ASSET(AssetPath) STR(CONTENT_PATH) AssetPath
#define FIND_CONFIG(ConfigPath) STR(CONFIG_PATH) ConfigPath

APlayer::APlayer(int X, int Y)
{
    m_location = {(float)X, (float)Y};
    m_sprite = LoadTexture(FIND_ASSET("sprite/Ship2.png"));
}

void APlayer::BeginPlayer()
{

}

void APlayer::Tick(float DeltaTime)
{
    if(IsKeyDown(KEY_W)) m_location.y -= (m_speed * DeltaTime);
    if(IsKeyDown(KEY_S)) m_location.y += (m_speed * DeltaTime);
    if(IsKeyDown(KEY_A)) m_location.x -= (m_speed * DeltaTime);
    if(IsKeyDown(KEY_D)) m_location.x += (m_speed * DeltaTime);

    DrawTextureV(m_sprite, m_location, WHITE);
}
