#pragma once

#include "raylib.h"
#include <string>

class Menu
{
public:
    
    Menu(int width, int height, std::string title);

    ~Menu() noexcept;

    bool GameShouldClose() const;

    void toggleFullScreenWindow(int windowWidth, int windowHeight);

    int GetDisplayWidth() const;

    int GetDisplayHeight() const;

    void allButtons();

    void gettingMousePosition();

    void UnloadTextures();


    void x(Rectangle rect, float rot, float alp, int sta, float frmsCounter, Texture2D star,
        Texture2D setti, Texture2D rls, Texture2D exit, Texture2D nam, Texture2D main,Rectangle playBnds, Rectangle settingsBnds, Rectangle rulesBnds,
        Rectangle exitBnds, Vector2 mouseLoc, bool isGameStillOn, Texture2D playHov, Texture2D optionsHov, Texture2D rulesHov,
        Texture2D exitHov);

 private:
    Vector2 mousePoint = { 0.0f, 0.0f };

    Texture2D main;
    Texture2D name;
    Texture2D start;
    Texture2D settings;
    Texture2D rules;
    Texture2D exit;

    Texture2D hoverstart;
    Texture2D hoversettings;
    Texture2D hoverrules;
    Texture2D hoverexit;

    Rectangle rec;
    Rectangle playBounds = { float(GetDisplayWidth() / 2 - 250 / 2 - 20), float(GetDisplayHeight() / 2 - 75 / 2 - 10), 250, 75 };
    Rectangle settingsBounds = { float(GetDisplayWidth() / 2 - 250 / 2 - 20), float(GetDisplayHeight() / 2 - 75 / 2 + 85), 250, 75 };
    Rectangle rulesBounds = { float(GetDisplayWidth() / 2 - 250 / 2 - 20), float(GetDisplayHeight() / 2 - 75 / 2 + 180), 250, 75 };
    Rectangle exitBounds = { float(GetDisplayWidth() / 2 - 250 / 2 - 20), float(GetDisplayHeight() / 2 - 75 / 2 + 275), 250, 75 };

    float rotation = 0.0f;
    float alpha = 0.0f;

    bool isRunning = true;

    int state = 0;

    float framesCounter = 0;
};