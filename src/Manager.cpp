#include "Manager.hpp"

#define NUM_FRAMES  3 

bool shouldExit = false;

void Manager::Initialize()
{
    InitWindow(0, 0, "Europe");

    SetTargetFPS(60);

    SetWindowSize(GetMonitorWidth(0), GetMonitorHeight(0));
}

void Manager::Update()
{
    Texture2D map = LoadTexture("assets/images/europe.png");

    Texture2D buttonfrance = LoadTexture("assets/images/france.png");
    Texture2D buttonbulgaria = LoadTexture("assets/images/bulgaria.png");
    
    float frameHeightfrance = (float)buttonfrance.height/NUM_FRAMES;
    Rectangle sourceRecfrance = { 0, 0, (float)buttonfrance.width, 100 };
    float frameHeightbulgaria = (float)buttonbulgaria.height/NUM_FRAMES;
    Rectangle sourceRecbulgaria = { 0, 0, (float)buttonbulgaria.width, 200 };

    Rectangle btnBoundsfrance = { 480, 675, (float)buttonfrance.width, frameHeightfrance };
    Rectangle btnBoundsbulgaria = { 100, 200, (float)buttonbulgaria.width, frameHeightbulgaria };

    int btnState = 0;

    Vector2 mousePoint = { 0.0f, 0.0f };

    mousePoint = GetMousePosition();

        if (CheckCollisionPointRec(mousePoint, btnBoundsfrance))
        {
        }
        else btnState = 0;

    sourceRecfrance.y = btnState*frameHeightfrance;

    BeginDrawing();

        ClearBackground(WHITE);

        DrawTexture(map, 0, 0, WHITE);

        DrawTextureRec(buttonfrance, sourceRecfrance, {btnBoundsfrance.x, btnBoundsfrance.y }, WHITE);
        // DrawTextureRec(buttonbulgaria, sourceRecbulgaria, {btnBoundsbulgaria.x, btnBoundsbulgaria.y }, WHITE); 

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