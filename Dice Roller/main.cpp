#include <raylib.h>
#include "dice.h"
#include <cstdlib>


int main(void){
    InitWindow(800, 600, "Dice Roller");
    SetTargetFPS(60);
    Dice mainDice(6);
    Texture2D Roller1 = LoadTexture("1.png");
    Texture2D Roller2 = LoadTexture("2.png");
    Texture2D Roller3 = LoadTexture("3.png");
    Texture2D Roller4 = LoadTexture("4.png");
    Texture2D Roller5 = LoadTexture("5.png");
    Texture2D Roller6 = LoadTexture("6.png");



    while(!WindowShouldClose()){
    BeginDrawing();
    ClearBackground(WHITE);
    DrawText("Press SPACE to roll the dice", 190, 200, 30, BLACK);
    if (IsKeyPressed(KEY_SPACE)){
        switch (mainDice.roll()){
            case 1:
            DrawTexture(Roller1, 200, 200, WHITE);
            break;
            case 2:
            DrawTexture(Roller2, 200, 200, WHITE);
            break;
            case 3:
            DrawTexture(Roller3, 200, 200, WHITE);
            break;
            case 4:
            DrawTexture(Roller4, 200, 200, WHITE);
            break;
            case 5:
            DrawTexture(Roller5, 200, 200, WHITE);
            break;
            case 6:
            DrawTexture(Roller6, 200, 200, WHITE);
            break;
        }
    }  
    EndDrawing();
    }
    UnloadTexture(Roller1);
    UnloadTexture(Roller2);
    UnloadTexture(Roller3);
    UnloadTexture(Roller4);
    UnloadTexture(Roller5);
    UnloadTexture(Roller6);
    CloseWindow();
    
    return 0;
}

//  g++ -o dicer1 main.cpp -lraylib