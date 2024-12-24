// graphics.c
#include "graphics.h"
#include <GL/glut.h>

float brightness = 1.0f; // Global brightness control

void initRendering() {
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_TEXTURE_2D);
}

void setBrightness(float level) {
    brightness = (level > 1.0f) ? 1.0f : ((level < 0.0f) ? 0.0f : level);
}

void displayStartScreen() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glColor3f(1, 0, 0);
    glRasterPos3f(-20, 20, -30);
    const char* title = "Cross The Road Game";
    for (int i = 0; title[i] != '\0'; i++) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, title[i]);
    }

    glRasterPos3f(-20, 18, -30);
    const char* msg1 = "Press SPACE to start the game";
    for (int i = 0; msg1[i] != '\0'; i++) {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, msg1[i]);
    }

    glRasterPos3f(-20, 16, -30);
    const char* msg2 = "Press ESC to exit the game";
    for (int i = 0; msg2[i] != '\0'; i++) {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, msg2[i]);
    }

    glutSwapBuffers();
}

void handleReshape(int w, int h) {
    if (h == 0) h = 1;
    float ratio = w / (float)h;

    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(90, ratio, 1, 120);
    glMatrixMode(GL_MODELVIEW);
}
