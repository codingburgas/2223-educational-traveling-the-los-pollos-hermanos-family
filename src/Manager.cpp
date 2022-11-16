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

    Texture2D buttonAustria = LoadTexture("assets/images/austria.png");
    Texture2D buttonBelgium = LoadTexture("assets/images/belgium.png");
    Texture2D buttonBulgaria = LoadTexture("assets/images/bulgaria.png");
    Texture2D buttonDenmark = LoadTexture("assets/images/denmark.png");
    Texture2D buttonFrance = LoadTexture("assets/images/france.png");
    Texture2D buttonGermany = LoadTexture("assets/images/germany.png");
    Texture2D buttonGreece = LoadTexture("assets/images/greece.png");
    Texture2D buttonItaly = LoadTexture("assets/images/italy.png");
    Texture2D buttonNetherlands = LoadTexture("assets/images/netherlands.png");
    Texture2D buttonPoland = LoadTexture("assets/images/poland.png");
    Texture2D buttonPortugal = LoadTexture("assets/images/portugal.png");
    Texture2D buttonRomania = LoadTexture("assets/images/romania.png");
    Texture2D buttonRussia = LoadTexture("assets/images/russia.png");
    Texture2D buttonSerbia = LoadTexture("assets/images/serbia.png");
    Texture2D buttonSweden = LoadTexture("assets/images/sweden.png");
    Texture2D buttonSwitzerland = LoadTexture("assets/images/switzerland.png");
    Texture2D buttonTurkey = LoadTexture("assets/images/turkey.png");
    Texture2D buttonUk = LoadTexture("assets/images/uk.png");
    Texture2D buttonUkraine = LoadTexture("assets/images/ukraine.png");

    float frameHeightFrance = (float)buttonFrance.height/NUM_FRAMES;
    Rectangle sourceRecFrance = { 0, 0, (float)buttonFrance.width, 100 };

    float frameHeightBulgaria = (float)buttonBulgaria.height/NUM_FRAMES;
    Rectangle sourceRecBulgaria = { 0, 0, (float)buttonBulgaria.width, 200 };

    Rectangle btnBoundsFrance = { 480, 675, (float)buttonFrance.width, frameHeightFrance };
    Rectangle btnBoundsBulgaria = { 100, 200, (float)buttonBulgaria.width, frameHeightBulgaria };

    int btnState = 0;

    Vector2 mousePoint = { 0.0f, 0.0f };

    mousePoint = GetMousePosition();

        if (CheckCollisionPointRec(mousePoint, btnBoundsFrance))
        {
        }
        else btnState = 0;

    sourceRecFrance.y = btnState*frameHeightFrance;

    BeginDrawing();

        ClearBackground(WHITE);

        DrawTexture(map, 0, 0, WHITE);

        DrawTextureRec(buttonFrance, sourceRecFrance, {btnBoundsFrance.x, btnBoundsFrance.y }, WHITE);
        DrawTextureRec(buttonBulgaria, sourceRecBulgaria, {btnBoundsBulgaria.x, btnBoundsBulgaria.y }, WHITE); 

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