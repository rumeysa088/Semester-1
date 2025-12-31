#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>//clear screen,launch and close media player,time,beep;


#define WIDTH 4
#define HEIGHT 15
#define TILE_CHAR 219


struct Tile {
    int lane;
    int y;
    int freeze; //flag
};


struct Tile tiles[HEIGHT];
int score = 0;
int speed = 300;
int gameOver = 0;
int lives=5;


// === NEW COLOR FUNCTION USING ANSI ESCAPE CODES ===
void setColor(int color) {
    int ansiColor;
    switch(color) {
        case 7:  ansiColor = 37; break;  // White
        case 9:  ansiColor = 34; break;  // Blue
        case 10: ansiColor = 32; break;  // Green
        case 11: ansiColor = 36; break;  // Cyan
        case 12: ansiColor = 31; break;  // Red
        case 13: ansiColor = 35; break;  // Magenta
        case 14: ansiColor = 33; break;  // Yellow
        default: ansiColor = 37; break;  // Default white
    }
    printf("\033[1;%dm", ansiColor);// \033 excape sequence(special command incoming) %dm replaced with colourcode
}
void setup() {
    
    for (int i = 0; i < HEIGHT; i++) {
        tiles[i].lane = rand() % WIDTH;  // Random lane (0-3)
        tiles[i].y = -i * 3;              // Staggered vertical position
        tiles[i].freeze = rand() % 10 == 0;  //Random number mod 10 results in num b/w 0-9 == 0? if yes freeze || Random number 47 → 47 % 10 = 7 → 7 == 0? NO → freeze = 0
    }
}
// === DRAW FUNCTION ===
void draw() {
    
     system("cls"); //takes string input executes command as if written in cmd
     setColor(11);
    // Draw header
    printf("🎹  PIANO TILES (Console Edition)\n");
    printf("---------------------------------\n");
    printf("-----------------RULES------------\n");
   printf("Black tiles fall down 4 lanes. Hit them at the bottom with keys A/S/D/F.\n");
   printf("Avoid blue 'freeze' tiles—they end the game instantly!\n");
    printf("Missing a tile costs a life (you have 5). Game over at 0 lives.\n");
   printf("Build combos for bonus points every 5 hits!\n");
    setColor(7);


    // Draw tiles
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            int isTile = 0;
            for (int i = 0; i < HEIGHT; i++) {  //outer loops create all possible coordinates for our 15X4 grid inner loop checks if tile present there
                if (tiles[i].lane == x && tiles[i].y == y) { //searches in the struct array if a tile is present using x y coordinates
                    isTile = 1;
                    if (tiles[i].freeze) setColor(9); // Blue for freeze
                    else setColor(10);                // Green for active tile
                    printf("| %c ", TILE_CHAR);
                    setColor(7);
                    break;
                }
            }
            if (isTile==0) printf("|   ");
        }
        printf("|\n");
    }


    printf("---------------------------------\n");
    printf("Keys: [A] [S] [D] [F]\n");
    printf("Score: %d\n", score);
    printf("Lives: %d\n", lives);
}
// === UPDATE FUNCTION ===
void update() {
    for (int i = 0; i < HEIGHT; i++) {
        tiles[i].y++;                   //Move ALL tiles down
        if (tiles[i].y >= HEIGHT) {            //Tile reached bottom?
            tiles[i].lane = rand() % WIDTH;   // New random lane (0-3)
            tiles[i].y = 0;                  //Reset to TOP
            tiles[i].freeze = rand() % 10 == 0;
        }
    }
}
// === FUNNY COMMENTS ===
void genzRoast() {
    int r = rand() % 5;
    switch(r) {
        case 0: 
            printf("🔥 You're cooking, no cap!\n");
            break;
        case 1:
            printf("💀 Don't blink, G!\n");
            break;
        case 2:
            printf("😎 Reflexes on point!\n");
            break;
        case 3:
            printf("🧠 Big brain moves!\n");
            break;
        case 4:
            printf("😂 Touch grass, you're too fast!\n");
            break;
    }
}
// === SOUND ===
void playSound(int freq) {
    Beep(freq, 80);
}

// === INPUT HANDLER ===
void input() {
    if (_kbhit()) {
        char ch = _getch();
        int lane = -1;

        if (ch == 'a' || ch == 'A') lane = 0;
        else if (ch == 's' || ch == 'S') lane = 1;
        else if (ch == 'd' || ch == 'D') lane = 2;
        else if (ch == 'f' || ch == 'F') lane = 3;

        if (lane != -1) {
            int hit = 0;
            // First pass: Check for freeze tiles EXACTLY at bottom
            for (int i = 0; i < HEIGHT; i++) {
                if (tiles[i].lane == lane && tiles[i].y == HEIGHT - 1 && tiles[i].freeze) {
                    setColor(12);
                    printf("\n❄️  You hit a freeze tile! Instant chill... 💀\n");
                    gameOver = 1;
                    return;
                }
            }
            // Second pass: Check for regular tiles EXACTLY at bottom
            for (int i = 0; i < HEIGHT; i++) {
                if (tiles[i].lane == lane && tiles[i].y == HEIGHT - 1) {
                    hit = 1;
                    score++;
                    playSound(400 + rand() % 500);
                    genzRoast();
                    tiles[i].y = 0;
                    tiles[i].lane = rand() % WIDTH;
                    tiles[i].freeze = rand() % 10 == 0;
                    break;
                }
            }
            if (!hit) {
               lives--;  
               setColor(12);
               printf("\n💀 Missed! Lives left: %d\n", lives);
               if (lives <= 0) {
                   gameOver = 1;
               }
            }
        }
    }
}

int main(){
    
    int playAgain=1;
    system("start /min background.wav");
     
while(playAgain){
    lives=5;
    gameOver = 0;    
    score = 0;      
    setup();
    while (!gameOver) {
        draw();
        input();
        update();
        Sleep(speed);


        if (score % 5 == 0 && score > 0 && speed > 60) speed -= 5;
    }


    setColor(12);
    printf("\n💀 GAME OVER! Final Score: %d\n", score);
    setColor(14);
        printf("Play again? (Y/N): ");
    setColor(7);
    char choice = _getch();
        if (choice == 'n' || choice == 'N') {
            playAgain = 0;  // Break the outer loop
        }
}
     
    system("taskkill /f /im wmplayer.exe >nul 2>&1");
    setColor(10);
    printf("\nThanks for playing! 👋\n");
    setColor(7);
    
    return 0;
}