#include "rlImGui.h"
#include "raylib.h"
#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720

int main(void)
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Sunshine Gurjas");
    SetTargetFPS(60);
    const int screenWidth = 1280;
    const int screenHeight = 720;

    
    Vector2 circlePosition = { screenWidth / 2, screenHeight / 2 };
    Vector2 mousePosition;
    float circleRadius = 50;
    Color circleColor = RED;

    
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Some Basic Shapes With Gurjas!", 16, 9, 20, RED);

        DrawCircleGradient( 500, 500, 100, GREEN, SKYBLUE);

        DrawCircleLines(500, 500, 100, GOLD);

        DrawTriangle({ 100, 200 }, { 200, 200 }, { 150, 100 }, GREEN);

        DrawRectangle(100, 200, 100, 250, VIOLET);



        mousePosition = GetMousePosition();

        if (CheckCollisionCircles(circlePosition, circleRadius, mousePosition, circleRadius))
        {
            circleColor = BLUE;
        }
        else
        {
            circleColor = RED;
        }

        DrawCircleV(circlePosition, circleRadius, circleColor);
        DrawCircleV(mousePosition, circleRadius, circleColor);


        EndDrawing();
    }

    CloseWindow();
    return 0;
}