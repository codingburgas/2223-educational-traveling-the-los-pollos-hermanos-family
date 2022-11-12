#include "Manager.hpp"

bool shouldExit = false;

void Manager::Initialize()
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Europe");

    SetTargetFPS(60);
}

void Manager::Update()
{
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // check for enter
 		if (IsKeyPressed(KEY_ENTER))
 		{
            // see what display we are on right now
 			int display = GetCurrentMonitor();
 
            
            if (IsWindowFullscreen())
            {
                // if we are full screen, then go back to the windowed size
                SetWindowSize(SCREEN_WIDTH, SCREEN_HEIGHT);
            }
            else
            {
                // if we are not full screen, set the window size to match the monitor we are on
                SetWindowSize(GetMonitorWidth(display), GetMonitorHeight(display));
            }
 
            // toggle the state
 			ToggleFullscreen();
 	    }

        Image image = LoadImage("images/europe.png");     
        Texture2D texture = LoadTextureFromImage(image);          
        UnloadImage(image);

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawTexture(texture, -120, 0, WHITE);

        EndDrawing();
    }
    CloseWindow();
}   

bool Manager::ShouldExit()
{
    return WindowShouldClose();
}

void Manager::Exit()
{
    shouldExit = true;
}