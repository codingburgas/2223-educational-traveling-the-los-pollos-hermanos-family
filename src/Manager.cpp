#include "Manager.hpp"

#include <iostream>
#include <vector>
#include <ctime>

#define NUM_FRAMES  3 

bool shouldExit = false;

Texture2D map;

Texture2D buttonAustria;
Texture2D buttonBelarus;
Texture2D buttonBelgium;
Texture2D buttonBulgaria;
Texture2D buttonDenmark;
Texture2D buttonFinland;
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
Texture2D buttonSpain;
Texture2D buttonSweden;
Texture2D buttonSwitzerland;
Texture2D buttonTurkey;
Texture2D buttonUK;
Texture2D buttonUkraine;

Texture2D buttonActivity1;
Texture2D buttonActivity2;
Texture2D buttonActivity3;

bool isClicked = false;

bool hasGenerated = false;

std::vector<size_t> buttonsPressed;

int score = 0;

int timesClicked = 0;

std::vector<std::string> activityTypes = {
    "Go shopping",
    "Visit a museum",
    "Eat at a restaurant",
    "Go to a concert",
    "Take a nap",
    "Travel with a boat",
    "Travel with a bus",
    "Read a book",
    "Drink a cup of coffee",
    "Do nothing and relax"
};

std::vector<std::string> chosenActivities;

Menu MainMenu;

Texture2D start;
Texture2D options;
Texture2D rules;
Texture2D exit;

bool inMenu = true;

void Manager::Initialize()
{
    InitWindow(1080, 720, "Europe");
    SetWindowPosition(0, 0);
    SetTargetFPS(60);

    MainMenu.ToggleFullScreen();

    map = LoadTexture("assets/images/europe.png");

    buttonAustria = LoadTexture("assets/images/austria.png");
    buttonBelarus = LoadTexture("assets/images/belarus.png");
    buttonBelgium = LoadTexture("assets/images/belgium.png");
    buttonBulgaria = LoadTexture("assets/images/bulgaria.png");
    buttonDenmark = LoadTexture("assets/images/denmark.png");
    buttonFinland = LoadTexture("assets/images/finland.png");
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
    buttonSpain = LoadTexture("assets/images/spain.png");
    buttonSweden = LoadTexture("assets/images/sweden.png");
    buttonSwitzerland = LoadTexture("assets/images/switzerland.png");
    buttonTurkey = LoadTexture("assets/images/turkey.png");
    buttonUK = LoadTexture("assets/images/uk.png");
    buttonUkraine = LoadTexture("assets/images/ukraine.png");

    buttonActivity1 = LoadTexture("assets/images/activity 1.png");
    buttonActivity2 = LoadTexture("assets/images/activity 2.png");
    buttonActivity3 = LoadTexture("assets/images/activity 3.png");

    start = LoadTexture("assets/buttons/Start.png");
    options = LoadTexture("assets/buttons/Options.png");
    rules = LoadTexture("assets/buttons/Rules.png");
    exit = LoadTexture("assets/buttons/Exit.png");

    MainMenu.x({ MainMenu.GetDisplayWidth() / 2.0f, -100, 150, 150 }, 0.0f, 1.0f, 0, 0, LoadTexture("assets/buttons/Start.png"),
        LoadTexture("assets/buttons/Options.png"), LoadTexture("assets/buttons/Rules.png"), LoadTexture("assets/buttons/Exit.png"),
        LoadTexture("assets/buttons/name.png"),
        { float(MainMenu.GetDisplayWidth() / 2 - 250 / 2 - 20), float(MainMenu.GetDisplayHeight() / 2 - 75 / 2 - 10), 250, 75 },
        { float(MainMenu.GetDisplayWidth() / 2 - 250 / 2 - 20), float(MainMenu.GetDisplayHeight() / 2 - 75 / 2 + 85), 250, 75 },
        { float(MainMenu.GetDisplayWidth() / 2 - 250 / 2 - 20), float(MainMenu.GetDisplayHeight() / 2 - 75 / 2 + 180), 250, 75 },
        { float(MainMenu.GetDisplayWidth() / 2 - 250 / 2 - 20), float(MainMenu.GetDisplayHeight() / 2 - 75 / 2 + 275), 250, 75 },
        GetMousePosition(), true, LoadTexture("assets/buttons/hoverstart.png"), LoadTexture("assets/buttons/hoversettings.png"), LoadTexture("assets/buttons/hoverrules.png"),
        LoadTexture("assets/buttons/hoverexit.png"));
}

void Manager::Update()
{
    std::vector<Rectangle> buttons;
    std::vector<Rectangle> activities;

    srand(time(0));

    if (MainMenu.inMenu)
    {
        BeginDrawing();

            ClearBackground(ORANGE);

            DrawTexture(start, MainMenu.GetDisplayWidth() / 2 - start.width / 2, MainMenu.GetDisplayHeight() / 2 - start.height / 2 - 10, RAYWHITE);
            DrawTexture(options, MainMenu.GetDisplayWidth() / 2 - options.width / 2, MainMenu.GetDisplayHeight() / 2 - options.height / 2 + 80, RAYWHITE);
            DrawTexture(rules, MainMenu.GetDisplayWidth() / 2 - rules.width / 2, MainMenu.GetDisplayHeight() / 2 - rules.height / 2 + 180, RAYWHITE);
            DrawTexture(exit, MainMenu.GetDisplayWidth() / 2 - exit.width / 2, MainMenu.GetDisplayHeight() / 2 - exit.height / 2 + 270, RAYWHITE);
            
            MainMenu.AllButtons();

        EndDrawing();
    }
    else
    {
        int frameHeightAustria = buttonAustria.height/NUM_FRAMES;
        Rectangle sourceRecAustria = { 0, 0, (float)buttonAustria.width, 20 };
        Rectangle btnBoundsAustria = { 415, 445, (float)buttonAustria.width, (float)frameHeightAustria };
        buttons.push_back(btnBoundsAustria);

        int frameHeightBelarus = buttonBelarus.height/NUM_FRAMES;
        Rectangle sourceRecBelarus = { 0, 0, (float)buttonBelarus.width, 30 };
        Rectangle btnBoundsBelarus = { 605, 330, (float)buttonBelarus.width, (float)frameHeightBelarus };
        buttons.push_back(btnBoundsBelarus);

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

        int frameHeightFinland = buttonFinland.height/NUM_FRAMES;
        Rectangle sourceRecFinland = { 0, 0, (float)buttonFinland.width, 45 };
        Rectangle btnBoundsFinland = { 522, 125, (float)buttonFinland.width, (float)frameHeightFinland };
        buttons.push_back(btnBoundsFinland);

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

        int frameHeightSpain = buttonSpain.height/NUM_FRAMES;
        Rectangle sourceRecSpain = { 0, 0, (float)buttonSpain.width, 50 };
        Rectangle btnBoundsSpain = { 80, 580, (float)buttonSpain.width, (float)frameHeightSpain };
        buttons.push_back(btnBoundsSpain);

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
        Rectangle sourceRecUK = { 0, 0, (float)buttonUK.width, 70 };
        Rectangle btnBoundsUK = { 100, 290, (float)buttonUK.width, (float)frameHeightUK };
        buttons.push_back(btnBoundsUK);

        int frameHeightUkraine = buttonUkraine.height/NUM_FRAMES;
        Rectangle sourceRecUkraine = { 0, 0, (float)buttonUkraine.width, 50 };
        Rectangle btnBoundsUkraine = { 630, 385, (float)buttonUkraine.width, (float)frameHeightUkraine };
        buttons.push_back(btnBoundsUkraine);

        int frameHeightActivity1 = buttonActivity1.height/NUM_FRAMES;
        Rectangle btnBoundsActivity1 = { 20, 10, (float)buttonActivity1.width, (float)frameHeightActivity1 };
        activities.push_back(btnBoundsActivity1);

        int frameHeightActivity2 = buttonActivity2.height/NUM_FRAMES;
        Rectangle btnBoundsActivity2 = { 20, 60, (float)buttonActivity2.width, (float)frameHeightActivity2 };
        activities.push_back(btnBoundsActivity2);

        int frameHeightActivity3 = buttonActivity3.height/NUM_FRAMES;
        Rectangle btnBoundsActivity3 = { 20, 110, (float)buttonActivity3.width, (float)frameHeightActivity3 };
        activities.push_back(btnBoundsActivity3);
        
        for (size_t i = 0; i < buttons.size(); i++)
        {
            bool buttonIsPressed = false;

            for (auto index : buttonsPressed)
            {
                if (i == index)
                {
                    buttonIsPressed = true;
                    break;
                }
            }

            if (CheckCollisionPointRec(GetMousePosition(), buttons[i]) && IsMouseButtonPressed(0) && !buttonIsPressed)
            {
                isClicked = true;
                buttonsPressed.push_back(i);
            }
        }
        
        BeginDrawing();

            ClearBackground(WHITE);

            DrawTexture(map, 0, 0, WHITE);

            std::string scoreText = "Score: " + std::to_string(score);
            std::string exitText = "(Press 'Esc' to exit)";

            if (timesClicked >= 5)
            {
                DrawText(("Final " + scoreText).c_str(), 325, 340, 50, BLACK);
                DrawText(exitText.c_str(), 380, 450, 26, BLACK);
            }

            if (isClicked)
            {
                if (!hasGenerated)
                {
                    auto toChooseFrom = activityTypes;

                    for (int i = 0; i < 3; i++)
                    {
                        int index = rand() % toChooseFrom.size();
                        
                        chosenActivities.push_back(toChooseFrom[index]);

                        toChooseFrom.erase(toChooseFrom.begin() + index);
                    }
                }

                DrawText(chosenActivities[0].c_str(), btnBoundsActivity1.x, btnBoundsActivity1.y, 26, BLACK);
                DrawText(chosenActivities[1].c_str(), btnBoundsActivity2.x, btnBoundsActivity2.y, 26, BLACK);
                DrawText(chosenActivities[2].c_str(), btnBoundsActivity3.x, btnBoundsActivity3.y, 26, BLACK);
            
                for (auto activity : activities)
                {
                    if (CheckCollisionPointRec(GetMousePosition(), activity) && IsMouseButtonPressed(0))
                    {
                        score += (rand() % 3 + 1) * 10;
                        timesClicked++;
                        chosenActivities = {};
                        isClicked = false;
                    }
                }
            }

            if (timesClicked < 5)
            {
                DrawText(scoreText.c_str(), 200, 675, 26, BLACK);

                DrawTextureRec(buttonAustria, sourceRecAustria, {btnBoundsAustria.x, btnBoundsAustria.y }, WHITE);
                DrawTextureRec(buttonBelarus, sourceRecBelarus, {btnBoundsBelarus.x, btnBoundsBelarus.y }, WHITE);
                DrawTextureRec(buttonBelgium, sourceRecBelgium, {btnBoundsBelgium.x, btnBoundsBelgium.y }, WHITE);
                DrawTextureRec(buttonBulgaria, sourceRecBulgaria, {btnBoundsBulgaria.x, btnBoundsBulgaria.y }, WHITE); 
                DrawTextureRec(buttonDenmark, sourceRecDenmark, {btnBoundsDenmark.x, btnBoundsDenmark.y }, WHITE); 
                DrawTextureRec(buttonFinland, sourceRecFinland, {btnBoundsFinland.x, btnBoundsFinland.y }, WHITE);
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
                DrawTextureRec(buttonSpain, sourceRecSpain, {btnBoundsSpain.x, btnBoundsSpain.y }, WHITE);
                DrawTextureRec(buttonSweden, sourceRecSweden, {btnBoundsSweden.x, btnBoundsSweden.y }, WHITE);
                DrawTextureRec(buttonSwitzerland, sourceRecSwitzerland, {btnBoundsSwitzerland.x, btnBoundsSwitzerland.y }, WHITE);
                DrawTextureRec(buttonTurkey, sourceRecTurkey, {btnBoundsTurkey.x, btnBoundsTurkey.y }, WHITE);
                DrawTextureRec(buttonUK, sourceRecUK, {btnBoundsUK.x, btnBoundsUK.y }, WHITE);
                DrawTextureRec(buttonUkraine, sourceRecUkraine, {btnBoundsUkraine.x, btnBoundsUkraine.y }, WHITE);
            }

        EndDrawing();
    }
}   

bool Manager::ShouldExit()
{
    return WindowShouldClose();
}

void Manager::Exit()
{
    shouldExit = true;
}