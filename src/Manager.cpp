#include "Manager.hpp"

#include <iostream>
#include <vector>

#define NUM_FRAMES  3 

bool shouldExit = false;

Texture2D map;

Texture2D buttonAustria;
Texture2D buttonBelgium;
Texture2D buttonBulgaria;
Texture2D buttonDenmark;
Texture2D buttonFrance;
Texture2D buttonGermany;
Texture2D buttonGreece;
Texture2D buttonItaly;
Texture2D buttonNetherlands;
Texture2D buttonNorway;
Texture2D buttonPoland;
Texture2D buttonPortugal;
Texture2D buttonRomania;
Texture2D buttonRussia;
Texture2D buttonSerbia;
Texture2D buttonSweden;
Texture2D buttonSwitzerland;
Texture2D buttonTurkey;
Texture2D buttonUK;
Texture2D buttonUkraine;

bool drawRec = false;
int buttonToDisplay;

void Manager::Initialize()
{
    InitWindow(1080, 720, "Europe");

    SetTargetFPS(60);

    map = LoadTexture("assets/images/europe.png");

    buttonAustria = LoadTexture("assets/images/austria.png");
    buttonBelgium = LoadTexture("assets/images/belgium.png");
    buttonBulgaria = LoadTexture("assets/images/bulgaria.png");
    buttonDenmark = LoadTexture("assets/images/denmark.png");
    buttonFrance = LoadTexture("assets/images/france.png");
    buttonGermany = LoadTexture("assets/images/germany.png");
    buttonGreece = LoadTexture("assets/images/greece.png");
    buttonItaly = LoadTexture("assets/images/italy.png");
    buttonNetherlands = LoadTexture("assets/images/netherlands.png");
    buttonNorway = LoadTexture("assets/images/norway.png");
    buttonPoland = LoadTexture("assets/images/poland.png");
    buttonPortugal = LoadTexture("assets/images/portugal.png");
    buttonRomania = LoadTexture("assets/images/romania.png");
    buttonRussia = LoadTexture("assets/images/russia.png");
    buttonSerbia = LoadTexture("assets/images/serbia.png");
    buttonSweden = LoadTexture("assets/images/sweden.png");
    buttonSwitzerland = LoadTexture("assets/images/switzerland.png");
    buttonTurkey = LoadTexture("assets/images/turkey.png");
    buttonUK = LoadTexture("assets/images/uk.png");
    buttonUkraine = LoadTexture("assets/images/ukraine.png");
}

void Manager::Update()
{
    std::vector<Rectangle> buttons;

    int frameHeightAustria = buttonAustria.height/NUM_FRAMES;
    Rectangle sourceRecAustria = { 0, 0, (float)buttonAustria.width, 20 };
    Rectangle btnBoundsAustria = { 415, 445, (float)buttonAustria.width, (float)frameHeightAustria };
    buttons.push_back(btnBoundsAustria);

    int frameHeightBelgium = buttonBelgium.height/NUM_FRAMES;
    Rectangle sourceRecBelgium = { 0, 0, (float)buttonBelgium.width, 20 };
    Rectangle btnBoundsBelgium = { 245, 385, (float)buttonBelgium.width, (float)frameHeightBelgium };
    buttons.push_back(btnBoundsBelgium);

    int frameHeightBulgaria = buttonBulgaria.height/NUM_FRAMES;
    Rectangle sourceRecBulgaria = { 0, 0, (float)buttonBulgaria.width, 25 };
    Rectangle btnBoundsBulgaria = { 590, 540, (float)buttonBulgaria.width, (float)frameHeightBulgaria };
    buttons.push_back(btnBoundsBulgaria);

    int frameHeightDenmark = buttonDenmark.height/NUM_FRAMES;
    Rectangle sourceRecDenmark = { 0, 0, (float)buttonDenmark.width, 21 };
    Rectangle btnBoundsDenmark = { 320, 280, (float)buttonDenmark.width, (float)frameHeightDenmark };
    buttons.push_back(btnBoundsDenmark);

    int frameHeightFrance = buttonFrance.height/NUM_FRAMES;
    Rectangle sourceRecFrance = { 0, 0, (float)buttonFrance.width, 50 };
    Rectangle btnBoundsFrance = { 180, 450, (float)buttonFrance.width, (float)frameHeightFrance };
    buttons.push_back(btnBoundsFrance);

    int frameHeightGermany = buttonGermany.height/NUM_FRAMES;
    Rectangle sourceRecGermany = { 0, 0, (float)buttonGermany.width, 30 };
    Rectangle btnBoundsGermany = { 310, 360, (float)buttonGermany.width, (float)frameHeightGermany };
    buttons.push_back(btnBoundsGermany);

    int frameHeightGreece = buttonGreece.height/NUM_FRAMES;
    Rectangle sourceRecGreece = { 0, 0, (float)buttonGreece.width, 20 };
    Rectangle btnBoundsGreece = { 545, 620, (float)buttonGreece.width, (float)frameHeightGreece };
    buttons.push_back(btnBoundsGreece);

    int frameHeightItaly = buttonItaly.height/NUM_FRAMES;
    Rectangle sourceRecItaly = { 0, 0, (float)buttonItaly.width, 40 };
    Rectangle btnBoundsItaly = { 370, 530, (float)buttonItaly.width, (float)frameHeightItaly };
    buttons.push_back(btnBoundsItaly);

    int frameHeightNetherlands = buttonNetherlands.height/NUM_FRAMES;
    Rectangle sourceRecNetherlands = { 0, 0, (float)buttonNetherlands.width, 20 };
    Rectangle btnBoundsNetherlands = { 255, 350, (float)buttonNetherlands.width, (float)frameHeightNetherlands };
    buttons.push_back(btnBoundsNetherlands);

    int frameHeightNorway = buttonNorway.height/NUM_FRAMES;
    Rectangle sourceRecNorway = { 0, 0, (float)buttonNorway.width, 50 };
    Rectangle btnBoundsNorway = { 280, 160, (float)buttonNorway.width, (float)frameHeightNorway };
    buttons.push_back(btnBoundsNorway);

    int frameHeightPoland = buttonPoland.height/NUM_FRAMES;
    Rectangle sourceRecPoland = { 0, 0, (float)buttonPoland.width, 50 };
    Rectangle btnBoundsPoland = { 455, 340, (float)buttonPoland.width, (float)frameHeightPoland };
    buttons.push_back(btnBoundsPoland);

    int frameHeightPortugal = buttonPortugal.height/NUM_FRAMES;
    Rectangle sourceRecPortugal = { 0, 0, (float)buttonPortugal.width, 30 };
    Rectangle btnBoundsPortugal = { 5, 600, (float)buttonPortugal.width, (float)frameHeightPortugal };
    buttons.push_back(btnBoundsPortugal);

    int frameHeightRomania = buttonRomania.height/NUM_FRAMES;
    Rectangle sourceRecRomania = { 0, 0, (float)buttonRomania.width, 30 };
    Rectangle btnBoundsRomania = { 565, 470, (float)buttonRomania.width, (float)frameHeightRomania };
    buttons.push_back(btnBoundsRomania);

    int frameHeightRussia = buttonRussia.height/NUM_FRAMES;
    Rectangle sourceRecRussia = { 0, 0, (float)buttonRussia.width, 100 };
    Rectangle btnBoundsRussia = { 800, 225, (float)buttonRussia.width, (float)frameHeightRussia };
    buttons.push_back(btnBoundsRussia);

    int frameHeightSerbia = buttonSerbia.height/NUM_FRAMES;
    Rectangle sourceRecSerbia = { 0, 0, (float)buttonSerbia.width, 20 };
    Rectangle btnBoundsSerbia = { 520, 510, (float)buttonSerbia.width, (float)frameHeightSerbia };
    buttons.push_back(btnBoundsSerbia);

    int frameHeightSweden = buttonSweden.height/NUM_FRAMES;
    Rectangle sourceRecSweden = { 0, 0, (float)buttonSweden.width, 40 };
    Rectangle btnBoundsSweden = { 380, 128, (float)buttonSweden.width, (float)frameHeightSweden };
    buttons.push_back(btnBoundsSweden);

    int frameHeightSwitzerland = buttonSwitzerland.height/NUM_FRAMES;
    Rectangle sourceRecSwitzerland = { 0, 0, (float)buttonSwitzerland.width, 15 };
    Rectangle btnBoundsSwitzerland = { 300, 460, (float)buttonSwitzerland.width, (float)frameHeightSwitzerland };
    buttons.push_back(btnBoundsSwitzerland);

    int frameHeightTurkey = buttonTurkey.height/NUM_FRAMES;
    Rectangle sourceRecTurkey = { 0, 0, (float)buttonTurkey.width, 80 };
    Rectangle btnBoundsTurkey = { 700, 590, (float)buttonTurkey.width, (float)frameHeightTurkey };
    buttons.push_back(btnBoundsTurkey);

    int frameHeightUK = buttonUK.height/NUM_FRAMES;
    Rectangle sourceRecUK = { 0, 0, (float)buttonUK.width, 100 };
    Rectangle btnBoundsUK = { 480, 675, (float)buttonUK.width, (float)frameHeightUK };
    buttons.push_back(btnBoundsUK);

    int frameHeightUkraine = buttonUkraine.height/NUM_FRAMES;
    Rectangle sourceRecUkraine = { 0, 0, (float)buttonUkraine.width, 100 };
    Rectangle btnBoundsUkraine = { 480, 675, (float)buttonUkraine.width, (float)frameHeightUkraine };
    buttons.push_back(btnBoundsUkraine);
    
    for (size_t i = 0; i < buttons.size(); i++)
    {
        if (CheckCollisionPointRec(GetMousePosition(), buttons[i]) && IsMouseButtonPressed(0))
        {
            drawRec = true;
            buttonToDisplay = i;
        }
    }
    
    BeginDrawing();

        ClearBackground(WHITE);

        DrawTexture(map, 0, 0, WHITE);

        if (drawRec)
        {
            DrawRectangleRec(buttons[buttonToDisplay], GREEN);
        }

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