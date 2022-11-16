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
    Texture2D buttonNorway = LoadTexture("assets/images/norway.png");
    Texture2D buttonPoland = LoadTexture("assets/images/poland.png");
    Texture2D buttonPortugal = LoadTexture("assets/images/portugal.png");
    Texture2D buttonRomania = LoadTexture("assets/images/romania.png");
    Texture2D buttonRussia = LoadTexture("assets/images/russia.png");
    Texture2D buttonSerbia = LoadTexture("assets/images/serbia.png");
    Texture2D buttonSweden = LoadTexture("assets/images/sweden.png");
    Texture2D buttonSwitzerland = LoadTexture("assets/images/switzerland.png");
    Texture2D buttonTurkey = LoadTexture("assets/images/turkey.png");
    Texture2D buttonUK = LoadTexture("assets/images/uk.png");
    Texture2D buttonUkraine = LoadTexture("assets/images/ukraine.png");

    float frameHeightAustria = buttonAustria.height/NUM_FRAMES;
    Rectangle sourceRecAustria = { 0, 0, buttonAustria.width, 200 };
    Rectangle btnBoundsAustria = { 100, 200, buttonAustria.width, frameHeightAustria };

    float frameHeightBelgium = buttonBelgium.height/NUM_FRAMES;
    Rectangle sourceRecBelgium = { 0, 0, buttonBelgium.width, 200 };
    Rectangle btnBoundsBelgium = { 100, 200, buttonBelgium.width, frameHeightBelgium };

    float frameHeightBulgaria = buttonBulgaria.height/NUM_FRAMES;
    Rectangle sourceRecBulgaria = { 0, 0, buttonBulgaria.width, 200 };
    Rectangle btnBoundsBulgaria = { 100, 200, buttonBulgaria.width, frameHeightBulgaria };

    float frameHeightDenmark = buttonDenmark.height/NUM_FRAMES;
    Rectangle sourceRecDenmark = { 0, 0, buttonDenmark.width, 100 };
    Rectangle btnBoundsDenmark = { 480, 675, buttonDenmark.width, frameHeightDenmark };

    float frameHeightFrance = buttonFrance.height/NUM_FRAMES;
    Rectangle sourceRecFrance = { 0, 0, buttonFrance.width, 100 };
    Rectangle btnBoundsFrance = { 480, 675, buttonFrance.width, frameHeightFrance };

    float frameHeightGermany = buttonGermany.height/NUM_FRAMES;
    Rectangle sourceRecGermany = { 0, 0, buttonGermany.width, 100 };
    Rectangle btnBoundsGermany = { 480, 675, buttonGermany.width, frameHeightGermany };

    float frameHeightGreece = buttonGreece.height/NUM_FRAMES;
    Rectangle sourceRecGreece = { 0, 0, buttonGreece.width, 100 };
    Rectangle btnBoundsGreece = { 480, 675, buttonGreece.width, frameHeightGreece };

    float frameHeightItaly = buttonItaly.height/NUM_FRAMES;
    Rectangle sourceRecItaly = { 0, 0, buttonItaly.width, 100 };
    Rectangle btnBoundsItaly = { 480, 675, buttonItaly.width, frameHeightItaly };

    float frameHeightNetherlands = buttonNetherlands.height/NUM_FRAMES;
    Rectangle sourceRecNetherlands = { 0, 0, buttonNetherlands.width, 100 };
    Rectangle btnBoundsNetherlands = { 480, 675, buttonNetherlands.width, frameHeightNetherlands };

    float frameHeightNorway = buttonNorway.height/NUM_FRAMES;
    Rectangle sourceRecNorway = { 0, 0, buttonNorway.width, 100 };
    Rectangle btnBoundsNorway = { 480, 675, buttonNorway.width, frameHeightNorway };

    float frameHeightPoland = buttonPoland.height/NUM_FRAMES;
    Rectangle sourceRecPoland = { 0, 0, buttonPoland.width, 100 };
    Rectangle btnBoundsPoland = { 480, 675, buttonPoland.width, frameHeightPoland };

    float frameHeightPortugal = buttonPortugal.height/NUM_FRAMES;
    Rectangle sourceRecPortugal = { 0, 0, buttonPortugal.width, 100 };
    Rectangle btnBoundsPortugal = { 480, 675, buttonPortugal.width, frameHeightPortugal };

    float frameHeightRomania = buttonRomania.height/NUM_FRAMES;
    Rectangle sourceRecRomania = { 0, 0, buttonRomania.width, 100 };
    Rectangle btnBoundsRomania = { 480, 675, buttonRomania.width, frameHeightRomania };

    float frameHeightRussia = buttonRussia.height/NUM_FRAMES;
    Rectangle sourceRecRussia = { 0, 0, buttonRussia.width, 100 };
    Rectangle btnBoundsRussia = { 480, 675, buttonRussia.width, frameHeightRussia };

    float frameHeightSerbia = buttonSerbia.height/NUM_FRAMES;
    Rectangle sourceRecSerbia = { 0, 0, buttonSerbia.width, 100 };
    Rectangle btnBoundsSerbia = { 480, 675, buttonSerbia.width, frameHeightSerbia };

    float frameHeightSweden = buttonSweden.height/NUM_FRAMES;
    Rectangle sourceRecSweden = { 0, 0, buttonSweden.width, 100 };
    Rectangle btnBoundsSweden = { 480, 675, buttonSweden.width, frameHeightSweden };

    float frameHeightSwitzerland = buttonSwitzerland.height/NUM_FRAMES;
    Rectangle sourceRecSwitzerland = { 0, 0, buttonSwitzerland.width, 100 };
    Rectangle btnBoundsSwitzerland = { 480, 675, buttonSwitzerland.width, frameHeightSwitzerland };

    float frameHeightTurkey = buttonTurkey.height/NUM_FRAMES;
    Rectangle sourceRecTurkey = { 0, 0, buttonTurkey.width, 100 };
    Rectangle btnBoundsTurkey = { 480, 675, buttonTurkey.width, frameHeightTurkey };

    float frameHeightUK = buttonUK.height/NUM_FRAMES;
    Rectangle sourceRecUK = { 0, 0, buttonUK.width, 100 };
    Rectangle btnBoundsUK = { 480, 675, buttonUK.width, frameHeightUK };

    float frameHeightUkraine = buttonUkraine.height/NUM_FRAMES;
    Rectangle sourceRecUkraine = { 0, 0, buttonUkraine.width, 100 };
    Rectangle btnBoundsUkraine = { 480, 675, buttonUkraine.width, frameHeightUkraine };

    int btnStateFrance = 0;

    Vector2 mousePoint = { 0.0f, 0.0f };

    mousePoint = GetMousePosition();

        if (CheckCollisionPointRec(mousePoint, btnBoundsFrance))
        {
        }
        else btnStateFrance = 0;

    sourceRecFrance.y = btnStateFrance*frameHeightFrance;

    BeginDrawing();

        ClearBackground(WHITE);

        DrawTexture(map, 0, 0, WHITE);

        DrawTextureRec(buttonBulgaria, sourceRecBulgaria, {btnBoundsBulgaria.x, btnBoundsBulgaria.y }, WHITE); 
        DrawTextureRec(buttonFrance, sourceRecFrance, {btnBoundsFrance.x, btnBoundsFrance.y }, WHITE);

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