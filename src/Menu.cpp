 #include "Menu.hpp"

Menu::Menu(int width, int height, std::string title)
{
    InitWindow(width, height, title.c_str());
    SetWindowPosition(0, 0);
    SetTargetFPS(60);
}

Menu::~Menu() noexcept
{
    CloseWindow();
}

bool Menu::GameShouldClose() const
{
    return WindowShouldClose() || !isRunning;
}

void Menu::x(Rectangle rect, float rot, float alp, int sta, float frmsCounter, Texture2D star,
    Texture2D setti, Texture2D rls, Texture2D exi, Texture2D nam, Texture2D mai, Rectangle playBnds,
    Rectangle settingsBnds, Rectangle rulesBnds, Rectangle exitBnds, Vector2 mouseLoc, bool isGameStillOn, Texture2D playHov,
    Texture2D optionsHov, Texture2D rulesHov, Texture2D exitHov)
{
    main = mai;
    rec = rect;
    rotation = rot;
    alpha = alp;
    state = sta;
    framesCounter = frmsCounter;
    start = star;
    settings = setti;
    rules = rls;
    exit = exi;
    name = nam;
    playBounds = playBnds;
    settingsBounds = settingsBnds;
    rulesBounds = rulesBnds;
    exitBounds = exitBnds;
    mousePoint = mouseLoc;
    isRunning = isGameStillOn;
    hoverstart = playHov;
    hoversettings = optionsHov;
    hoverrules = rulesHov;
    hoverexit = exitHov;
}


void Menu::toggleFullScreenWindow(int windowWidth, int windowHeight)
{
    if (!IsWindowFullscreen())
    {
        int monitor = GetCurrentMonitor();
        SetWindowSize(GetMonitorWidth(monitor), GetMonitorHeight(monitor));
    }
    else
    {
        ToggleFullscreen();
        SetWindowSize(windowWidth, windowHeight);
    }
}

int Menu::GetDisplayWidth() const
{
    if (IsWindowFullscreen())
    {
        int monitor = GetCurrentMonitor();
        return GetMonitorWidth(monitor);
    }
    else
    {
        return GetScreenWidth();
    }
}
int Menu::GetDisplayHeight() const
{
    if (IsWindowFullscreen())
    {
        int monitor = GetCurrentMonitor();
        return GetMonitorHeight(monitor);
    }
    else
    {
        return GetScreenHeight();
    }
}

void Menu::gettingMousePosition()
{
    mousePoint = GetMousePosition();
}

void Menu::UnloadTextures()
{
    UnloadTexture(name);
    UnloadTexture(start);
    UnloadTexture(settings);
    UnloadTexture(rules);
    UnloadTexture(exit);
}



void Menu::allButtons()
{
    gettingMousePosition();

    if (CheckCollisionPointRec(mousePoint, playBounds))
    {
        DrawTexture(hoverstart, GetDisplayWidth() / 2 - hoverstart.width / 2 - 20, GetDisplayHeight() / 2 - hoverstart.height / 2 - 10, RAYWHITE);

        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            
            ClearBackground(BLUE);
        }
    }

    if (CheckCollisionPointRec(mousePoint, settingsBounds))
    {
        DrawTexture(hoversettings, GetDisplayWidth() / 2 - hoversettings.width / 2 - 20, GetDisplayHeight() / 2 - hoversettings.height / 2 + 85, RAYWHITE);

        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
          
            ClearBackground(BLUE);
        }
    }

    if (CheckCollisionPointRec(mousePoint, rulesBounds))
    {
        DrawTexture(hoverrules, GetDisplayWidth() / 2 - hoverrules.width / 2 - 20, GetDisplayHeight() / 2 - hoverrules.height / 2 + 180, RAYWHITE);

        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            
            ClearBackground(BLUE);
        }
    }

    if (CheckCollisionPointRec(mousePoint, exitBounds))
    {
        DrawTexture(hoverexit, GetDisplayWidth() / 2 - hoverexit.width / 2 - 20, GetDisplayHeight() / 2 - hoverexit.height / 2 + 275, RAYWHITE);

        if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
        {
            isRunning = false;
        }
    }
}

