#include "Manager.hpp"

#define NUM_FRAMES  3 

bool shouldExit = false;

void Manager::Initialize()
{
    InitWindow(1080, 720, "Europe");

    SetTargetFPS(60);
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

    int frameHeightAustria = buttonAustria.height/NUM_FRAMES;
    Rectangle sourceRecAustria = { 0, 0, (float)buttonAustria.width, 20 };
    Rectangle btnBoundsAustria = { 415, 445, (float)buttonAustria.width, (float)frameHeightAustria };

    int frameHeightBelgium = buttonBelgium.height/NUM_FRAMES;
    Rectangle sourceRecBelgium = { 0, 0, (float)buttonBelgium.width, 20 };
    Rectangle btnBoundsBelgium = { 180, 450, (float)buttonBelgium.width, (float)frameHeightBelgium };

    int frameHeightBulgaria = buttonBulgaria.height/NUM_FRAMES;
    Rectangle sourceRecBulgaria = { 0, 0, (float)buttonBulgaria.width, 200 };
    Rectangle btnBoundsBulgaria = { 100, 200, (float)buttonBulgaria.width, (float)frameHeightBulgaria };

    int frameHeightDenmark = buttonDenmark.height/NUM_FRAMES;
    Rectangle sourceRecDenmark = { 0, 0, (float)buttonDenmark.width, 100 };
    Rectangle btnBoundsDenmark = { 480, 300, (float)buttonDenmark.width, (float)frameHeightDenmark };

    int frameHeightFrance = buttonFrance.height/NUM_FRAMES;
    Rectangle sourceRecFrance = { 0, 0, (float)buttonFrance.width, 50 };
    Rectangle btnBoundsFrance = { 180, 450, (float)buttonFrance.width, (float)frameHeightFrance };

    int frameHeightGermany = buttonGermany.height/NUM_FRAMES;
    Rectangle sourceRecGermany = { 0, 0, (float)buttonGermany.width, 100 };
    Rectangle btnBoundsGermany = { 480, 675, (float)buttonGermany.width, (float)frameHeightGermany };

    int frameHeightGreece = buttonGreece.height/NUM_FRAMES;
    Rectangle sourceRecGreece = { 0, 0, (float)buttonGreece.width, 100 };
    Rectangle btnBoundsGreece = { 400, 675, (float)buttonGreece.width, (float)frameHeightGreece };

    int frameHeightItaly = buttonItaly.height/NUM_FRAMES;
    Rectangle sourceRecItaly = { 0, 0, (float)buttonItaly.width, 100 };
    Rectangle btnBoundsItaly = { 480, 675, (float)buttonItaly.width, (float)frameHeightItaly };

    int frameHeightNetherlands = buttonNetherlands.height/NUM_FRAMES;
    Rectangle sourceRecNetherlands = { 0, 0, (float)buttonNetherlands.width, 100 };
    Rectangle btnBoundsNetherlands = { 480, 675, (float)buttonNetherlands.width, (float)frameHeightNetherlands };

    int frameHeightNorway = buttonNorway.height/NUM_FRAMES;
    Rectangle sourceRecNorway = { 0, 0, (float)buttonNorway.width, 100 };
    Rectangle btnBoundsNorway = { 480, 675, (float)buttonNorway.width, (float)frameHeightNorway };

    int frameHeightPoland = buttonPoland.height/NUM_FRAMES;
    Rectangle sourceRecPoland = { 0, 0, (float)buttonPoland.width, 100 };
    Rectangle btnBoundsPoland = { 480, 675, (float)buttonPoland.width, (float)frameHeightPoland };

    int frameHeightPortugal = buttonPortugal.height/NUM_FRAMES;
    Rectangle sourceRecPortugal = { 0, 0, (float)buttonPortugal.width, 100 };
    Rectangle btnBoundsPortugal = { 480, 675, (float)buttonPortugal.width, (float)frameHeightPortugal };

    int frameHeightRomania = buttonRomania.height/NUM_FRAMES;
    Rectangle sourceRecRomania = { 0, 0, (float)buttonRomania.width, 100 };
    Rectangle btnBoundsRomania = { 480, 675, (float)buttonRomania.width, (float)frameHeightRomania };

    int frameHeightRussia = buttonRussia.height/NUM_FRAMES;
    Rectangle sourceRecRussia = { 0, 0, (float)buttonRussia.width, 100 };
    Rectangle btnBoundsRussia = { 480, 675, (float)buttonRussia.width, (float)frameHeightRussia };

    int frameHeightSerbia = buttonSerbia.height/NUM_FRAMES;
    Rectangle sourceRecSerbia = { 0, 0, (float)buttonSerbia.width, 100 };
    Rectangle btnBoundsSerbia = { 480, 675, (float)buttonSerbia.width, (float)frameHeightSerbia };

    int frameHeightSweden = buttonSweden.height/NUM_FRAMES;
    Rectangle sourceRecSweden = { 0, 0, (float)buttonSweden.width, 100 };
    Rectangle btnBoundsSweden = { 480, 675, (float)buttonSweden.width, (float)frameHeightSweden };

    int frameHeightSwitzerland = buttonSwitzerland.height/NUM_FRAMES;
    Rectangle sourceRecSwitzerland = { 0, 0, (float)buttonSwitzerland.width, 100 };
    Rectangle btnBoundsSwitzerland = { 480, 675, (float)buttonSwitzerland.width, (float)frameHeightSwitzerland };

    int frameHeightTurkey = buttonTurkey.height/NUM_FRAMES;
    Rectangle sourceRecTurkey = { 0, 0, (float)buttonTurkey.width, 100 };
    Rectangle btnBoundsTurkey = { 480, 675, (float)buttonTurkey.width, (float)frameHeightTurkey };

    int frameHeightUK = buttonUK.height/NUM_FRAMES;
    Rectangle sourceRecUK = { 0, 0, (float)buttonUK.width, 100 };
    Rectangle btnBoundsUK = { 480, 675, (float)buttonUK.width, (float)frameHeightUK };

    int frameHeightUkraine = buttonUkraine.height/NUM_FRAMES;
    Rectangle sourceRecUkraine = { 0, 0, (float)buttonUkraine.width, 100 };
    Rectangle btnBoundsUkraine = { 480, 675, (float)buttonUkraine.width, (float)frameHeightUkraine };

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

        DrawTextureRec(buttonAustria, sourceRecAustria, {btnBoundsAustria.x, btnBoundsAustria.y }, WHITE); 
        DrawTextureRec(buttonBelgium, sourceRecBelgium, {btnBoundsBelgium.x, btnBoundsBelgium.y }, WHITE); 
        DrawTextureRec(buttonBulgaria, sourceRecBulgaria, {btnBoundsBulgaria.x, btnBoundsBulgaria.y }, WHITE); 
        DrawTextureRec(buttonDenmark, sourceRecDenmark, {btnBoundsDenmark.x, btnBoundsDenmark.y }, WHITE); 
        DrawTextureRec(buttonFrance, sourceRecFrance, {btnBoundsFrance.x, btnBoundsFrance.y }, WHITE);
        DrawTextureRec(buttonGermany, sourceRecGermany, {btnBoundsGermany.x, btnBoundsGermany.y }, WHITE);
        DrawTextureRec(buttonGreece, sourceRecGreece, {btnBoundsGreece.x, btnBoundsGreece.y }, WHITE);
        DrawTextureRec(buttonItaly, sourceRecItaly, {btnBoundsItaly.x, btnBoundsItaly.y }, WHITE);
        DrawTextureRec(buttonNetherlands, sourceRecNetherlands, {btnBoundsNetherlands.x, btnBoundsNetherlands.y }, WHITE);
        DrawTextureRec(buttonNorway, sourceRecNorway, {btnBoundsNorway.x, btnBoundsNorway.y }, WHITE);
        DrawTextureRec(buttonPoland, sourceRecPoland, {btnBoundsPoland.x, btnBoundsPoland.y }, WHITE);
        DrawTextureRec(buttonPortugal, sourceRecPortugal, {btnBoundsPortugal.x, btnBoundsPortugal.y }, WHITE);
        DrawTextureRec(buttonRomania, sourceRecRomania, {btnBoundsRomania.x, btnBoundsRomania.y }, WHITE);
        DrawTextureRec(buttonRussia, sourceRecRussia, {btnBoundsRussia.x, btnBoundsRussia.y }, WHITE);
        DrawTextureRec(buttonSerbia, sourceRecSerbia, {btnBoundsSerbia.x, btnBoundsSerbia.y }, WHITE);
        DrawTextureRec(buttonSweden, sourceRecSweden, {btnBoundsSweden.x, btnBoundsSweden.y }, WHITE);
        DrawTextureRec(buttonSwitzerland, sourceRecSwitzerland, {btnBoundsSwitzerland.x, btnBoundsSwitzerland.y }, WHITE);
        DrawTextureRec(buttonTurkey, sourceRecTurkey, {btnBoundsTurkey.x, btnBoundsTurkey.y }, WHITE);
        DrawTextureRec(buttonUK, sourceRecUK, {btnBoundsUK.x, btnBoundsUK.y }, WHITE);
        DrawTextureRec(buttonUkraine, sourceRecUkraine, {btnBoundsUkraine.x, btnBoundsUkraine.y }, WHITE);

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