#include "events.h"
#include "game.h"
#include <GL/glut.h>
#include <math.h>
#include <stdlib.h>

extern float brightness;
extern float eyex, eyey, eyez, upx, upy, upz;
extern int ball_x, ball_y, ball_z;

void handleKeyboard(unsigned char key, int x, int y) {
    switch (key) {
        case 27: // ESC key
            exit(0);
            break;

        case ' ': // Space key
            resetGame();
            break;

        case 'P':
        case 'p':
            brightness += 0.1f;
            if (brightness > 1.0f) brightness = 1.0f;
            break;

        case 'O':
        case 'o':
            brightness -= 0.1f;
            if (brightness < 0.0f) brightness = 0.0f;
            break;

        case 'w':
        case 'W':
            if (ball_z > -65) ball_z -= 2;
            break;

        case 's':
        case 'S':
            if (ball_z < -5) ball_z += 2;
            break;

        case 'a':
        case 'A':
            if (ball_x > 0) ball_x -= 2;
            break;

        case 'd':
        case 'D':
            if (ball_x < 100) ball_x += 2;
            break;

        default:
            break;
    }

    glutPostRedisplay();
}

void handleSpecialKeys(int key, int x, int y) {
    switch (key) {
        case GLUT_KEY_UP:
            eyez -= 2;
            eyey += 0.3 * fabs(cos(0.1)); // Simplified movement logic
            break;

        case GLUT_KEY_DOWN:
            eyez += 2;
            eyey += 0.3 * fabs(cos(0.1));
            break;

        case GLUT_KEY_LEFT:
            upx -= 0.9 * cos(0.1);
            upz -= 0.9 * sin(0.1);
            break;

        case GLUT_KEY_RIGHT:
            upx += 0.9 * cos(0.1);
            upz += 0.9 * sin(0.1);
            break;

        default:
            break;
    }
}
