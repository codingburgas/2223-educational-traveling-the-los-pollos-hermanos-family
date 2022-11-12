#include "Manager.hpp"

int main()
{
    Manager::Initialize();

    while (!Manager::ShouldExit())
    {
        Manager::Update();
    }

    CloseWindow();

    return 0;
}