#include "raylib.h"
#include "Menu.h"


int main(void)
{
    

    Menu menu(800, 900, "LPHF");

    menu.toggleFullScreenWindow(menu.GetDisplayWidth(), menu.GetDisplayHeight());


    Texture2D main = LoadTexture("textures/main.png");
    Texture2D start = LoadTexture("textures/Start.png");
    Texture2D options = LoadTexture("textures/Options.png");
    Texture2D rules = LoadTexture("textures/Rules.png");
    Texture2D exit = LoadTexture("textures/Exit.png");

    menu.x({ menu.GetDisplayWidth() / 2.0f, -100, 150, 150 }, 0.0f, 1.0f, 0, 0, LoadTexture("textures/Start.png"),
        LoadTexture("textures/Options.png"), LoadTexture("textures/Rules.png"), LoadTexture("textures/Exit.png"),
        LoadTexture("textures/name.png"),LoadTexture("textures/main.png"),
        { float(menu.GetDisplayWidth() / 2 - 250 / 2 - 20), float(menu.GetDisplayHeight() / 2 - 75 / 2 - 10), 250, 75 },
        { float(menu.GetDisplayWidth() / 2 - 250 / 2 - 20), float(menu.GetDisplayHeight() / 2 - 75 / 2 + 85), 250, 75 },
        { float(menu.GetDisplayWidth() / 2 - 250 / 2 - 20), float(menu.GetDisplayHeight() / 2 - 75 / 2 + 180), 250, 75 },
        { float(menu.GetDisplayWidth() / 2 - 250 / 2 - 20), float(menu.GetDisplayHeight() / 2 - 75 / 2 + 275), 250, 75 },
        GetMousePosition(), true, LoadTexture("textures/hoverstart.png"), LoadTexture("textures/hoversettings.png"), LoadTexture("textures/hoverrules.png"),
        LoadTexture("textures/hoverexit.png"));

  
    while (!menu.GameShouldClose())
    {
       

        BeginDrawing();
        
        ClearBackground(ORANGE);
        DrawTexture(main, menu.GetDisplayWidth() / 2 - main.width / 2, menu.GetDisplayHeight() / 2 - main.height / 2 - 10, RAYWHITE);
        DrawTexture(start, menu.GetDisplayWidth() / 2 - start.width / 2, menu.GetDisplayHeight() / 2 - start.height / 2 - 10, RAYWHITE);
        DrawTexture(options, menu.GetDisplayWidth() / 2 - options.width / 2, menu.GetDisplayHeight() / 2 - options.height / 2 + 80, RAYWHITE);
        DrawTexture(rules, menu.GetDisplayWidth() / 2 - rules.width / 2, menu.GetDisplayHeight() / 2 - rules.height / 2 + 180, RAYWHITE);
        DrawTexture(exit, menu.GetDisplayWidth() / 2 - exit.width / 2, menu.GetDisplayHeight() / 2 - exit.height / 2 + 270, RAYWHITE);
       
        menu.allButtons();

        EndDrawing();
    }
  

    menu.UnloadTextures();

    return 0;
}   