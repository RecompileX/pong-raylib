#include <iostream.>
#include <raylib.h>


int main(){

    std::cout << "Starting the game." << std::endl;
    const int screenWidth = 1280;
    const int screenHeight = 800;
    InitWindow(screenWidth, screenHeight, "Pong");
    SetTargetFPS(60);

    while(WindowShouldClose() == false){

        BeginDrawing();

        EndDrawing();

    }

    CloseWindow();
    return 0;
}