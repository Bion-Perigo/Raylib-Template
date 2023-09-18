#include <iostream>
#include "raylib.h"

#define NOEXPAND(A) #A
#define STR(A) NOEXPAND(A)
#define FIND_CONFIG(FilePath)  STR(CONFIG_PATH) FilePath
#define FIND_CONTENT(FilePath) STR(CONTENT_PATH) FilePath

int main(int argc, char* argv[])
{
	for (int i = 0; i < argc; i++) {
		std::cout << "Command " << i << ": " << argv[i] << "\n";
	}
	std::cout << "\n";

	std::cout << "AppName---------->" STR(APP_NAME)     << "\n";
	std::cout << "ConfigPath------->" STR(CONFIG_PATH)  << "\n";
	std::cout << "ContentPath------>" STR(CONTENT_PATH) << "\n";

	std::cout << "FindConfigFile--->" FIND_CONFIG("AppSettings.txt") << "\n";
	std::cout << "FindContentFile-->" FIND_CONTENT("Texture/MenuImage.png")  << "\n";
	
	std::cout << "\n";

#ifdef DEBUG_MODE
	std::cout << "Debug_Mode\n";
#elif RELEASE_MODE
	std::cout << "Release_Mode\n";
#endif

#ifdef PLATFORM_WINDOWS
	std::cout << "Platform_Windows\n";
#elif PLATFORM_LINUX
	std::cout << "Platform_linux\n";
#else
	std::cout << "Platform_Null\n";
#endif // PLATFORM_WINDOWS

// Raylib Example

	InitWindow(800, 600, "Raylib-Template");
	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(DARKGRAY);

		DrawFPS(100, 100);

		DrawText("Raylib-Template", GetScreenWidth() / 2, GetScreenHeight() / 2, 20, YELLOW);

		EndDrawing();
	}

	CloseWindow();

	return 0;
}
