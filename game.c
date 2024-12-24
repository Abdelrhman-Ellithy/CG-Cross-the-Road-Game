#include "game.h"
#include <GL/glut.h>
#include <stdio.h>

extern int ball_x, ball_y, ball_z;
extern int attemptss;
extern float level;

void resetGame() {
    ball_x = 50;
    ball_y = 2;
    ball_z = -5;
    attemptss = 3;
    level = 1.0f;
}

void handleCollision(float car1, float car2, float car3) {
    if (ball_z < -10 && ball_z > -60) {
        // Check collision with car1
        if ((car1 + 12) - ball_x >= -2 && car1 - ball_x <= 2) {
            printf("Collision with car1\n");
            loseAttempt();
        }

        // Check collision with car2
        if ((car2 + 36) - ball_x >= -2 && (car2 + 24) - ball_x <= 2) {
            printf("Collision with car2\n");
            loseAttempt();
        }

        // Check collision with car3
        if ((50 - 12 - car3) - ball_x <= 2 && (50 - car3) - ball_x >= -2) {
            printf("Collision with car3\n");
            loseAttempt();
        }
    }
}

void loseAttempt() {
    ball_x = 50;
    ball_y = 2;
    ball_z = -5;
    attemptss--;

    if (attemptss <= 0) {
        printf("Game Over!\n");
        resetGame();
    }
}

void nextLevel() {
    ball_x = 50;
    ball_y = 2;
    ball_z = -5;
    level += 1.0f;
    printf("Level Up! Current Level: %.1f\n", level);
}
