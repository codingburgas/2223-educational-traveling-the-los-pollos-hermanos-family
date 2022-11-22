 #include "Menu.hpp"

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

void Menu::ToggleFullScreen()
{
    int windowWidth = GetDisplayWidth();
    int windowHeight = GetDisplayHeight();

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

void Menu::MakeSmall()
{
    ToggleFullscreen();
    SetWindowSize(1080, 720);
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

void Menu::UnloadTextures()
{
    UnloadTexture(name);
    UnloadTexture(start);
    UnloadTexture(settings);
    UnloadTexture(rules);
    UnloadTexture(exit);
}

void Menu::AllButtons()
{
    if (CheckCollisionPointRec(GetMousePosition(), playBounds))
    {
        DrawTexture(hoverstart, GetDisplayWidth() / 2 - hoverstart.width / 2 - 20, GetDisplayHeight() / 2 - hoverstart.height / 2 - 10, RAYWHITE);

        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            ClearBackground(BLUE);
            MakeSmall();
            inMenu = false;
        }
    }

    if (CheckCollisionPointRec(GetMousePosition(), settingsBounds))
    {
        DrawTexture(hoversettings, GetDisplayWidth() / 2 - hoversettings.width / 2 - 20, GetDisplayHeight() / 2 - hoversettings.height / 2 + 85, RAYWHITE);

        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            DrawText("Settings button is working!", 200, GetDisplayHeight() / 2, 24, RAYWHITE);
            ClearBackground(BLUE);
        }
    }

    if (CheckCollisionPointRec(GetMousePosition(), rulesBounds))
    {
        DrawTexture(hoverrules, GetDisplayWidth() / 2 - hoverrules.width / 2 - 20, GetDisplayHeight() / 2 - hoverrules.height / 2 + 180, RAYWHITE);

        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            DrawText("Rules button is working!", 200, GetDisplayHeight() / 2, 24, RAYWHITE);
            ClearBackground(BLUE);
        }
    }

    if (CheckCollisionPointRec(GetMousePosition(), exitBounds))
    {
        DrawTexture(hoverexit, GetDisplayWidth() / 2 - hoverexit.width / 2 - 20, GetDisplayHeight() / 2 - hoverexit.height / 2 + 275, RAYWHITE);

        if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
            CloseWindow();
    }
}

