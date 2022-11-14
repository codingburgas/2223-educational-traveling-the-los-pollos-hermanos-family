#include "Manager.hpp"

#define NUM_FRAMES  3 

bool shouldExit = false;

void Manager::Initialize()
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Europe");

    SetTargetFPS(60);

    SetWindowSize(GetMonitorWidth(0), GetMonitorHeight(0));

    ToggleFullscreen();
}

void Manager::Update()
{
    Texture2D texture = LoadTexture("assets/images/europe.png");
    Texture2D buttonfrance = LoadTexture("assets/images/france.png");

    float frameHeight = (float)buttonfrance.height/NUM_FRAMES;
    Rectangle sourceRec = { 0, 0, (float)buttonfrance.width, 55 };

    Rectangle btnBounds = { 400, 675, (float)buttonfrance.width, frameHeight };

    int btnState = 0;

    Vector2 mousePoint = { 0.0f, 0.0f };

    mousePoint = GetMousePosition();

        // Check button state
        if (CheckCollisionPointRec(mousePoint, btnBounds))
        {
            
        }
        else btnState = 0;

    sourceRec.y = btnState*frameHeight;

    BeginDrawing();

        ClearBackground(RED);

        DrawTexture(texture, -120, 0, WHITE);

        DrawTextureRec(buttonfrance, sourceRec, {btnBounds.x, btnBounds.y }, WHITE);

    EndDrawing();
}   

bool Manager::ShouldExit()
{
    return WindowShouldClose();
}

void Manager::Exit()
{
    shouldExit = true;
}