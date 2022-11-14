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
    Texture2D button = LoadTexture("assets/images/france.png");

    float frameHeight = (float)button.height/NUM_FRAMES;
    Rectangle sourceRec = { 0, 0, (float)button.width, frameHeight };

    Rectangle btnBounds = { SCREEN_WIDTH/2.0f - button.width/2.0f, SCREEN_HEIGHT/2.0f - button.height/NUM_FRAMES/2.0f, (float)button.width, frameHeight };

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

        DrawTextureRec(button, sourceRec, {btnBounds.x, btnBounds.y }, WHITE);

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