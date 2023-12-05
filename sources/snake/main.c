#include "raylib.h"

#define RAYGUI_IMPLEMENTATION
#include "raygui.h"

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

int main(void) {
	InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "raylib");
	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
		EndDrawing();
	}

	CloseWindow();

	return 0;
}
