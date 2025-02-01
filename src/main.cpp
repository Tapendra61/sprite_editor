#include "raylib.h"
#define RAYGUI_IMPLEMENTATION
#include "raygui.h"
#include<iostream>

int main() {
	//Window Settings
	const int SCREEN_WIDTH = 1920;
	const int SCREEN_HEIGHT = 1080;
	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Khukuri Sprite Editor");
	SetTargetFPS(60);
	ToggleFullscreen();
	
	//Color Properties
	const Color background_color{50, 50, 55, 255};

	Rectangle sidebarRect = Rectangle{0, 0, (float)(GetScreenWidth() * 0.15), (float)GetScreenHeight()};
	Rectangle canvasRect = Rectangle{sidebarRect.width, 0, GetScreenWidth() - sidebarRect.width, (float)GetScreenHeight()};

	//Boolean Properties
	bool sidebarOpen = true;

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(background_color);

		if (sidebarOpen) {
			GuiPanel(sidebarRect, "Tools");

		}
		


		EndDrawing();
	}

	CloseWindow();
	return 0;
}
