#include "Engine/GameFramework/Pawn/Player/Player.h"
#include "raylib.h"

#include <iostream>

#define NO_EXPAND(a)            #a
#define STR(a)                  NO_EXPAND(a)
#define FIND_ASSET(AssetPath)   STR(CONTENT_PATH) AssetPath
#define FIND_CONFIG(ConfigPath) STR(CONFIG_PATH) ConfigPath

int main() {
  InitWindow(800, 600, STR(GAME_NAME));
  SetTargetFPS(60);
  APlayer *player = new APlayer(100, 300);
  player->BeginPlayer();

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(DARKGRAY);
    player->Tick(GetFrameTime());
    DrawFPS(100, 100);
    DrawText("Raylib-Template", 300, 300, 20, YELLOW);

    DrawText("My Text", 200, 200, 20, DARKBLUE);
    EndDrawing();
  }

  std::cout << "Config  Path:" << STR(CONFIG_PATH) << "\n";
  std::cout << "Content Path:" << STR(CONTENT_PATH) << "\n";

  return 0;
}
