#include <GL/glut.h>
#include "graphics.h"
#include "events.h"
#include "game.h"

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutCreateWindow("Cross the Road Game");
    glutFullScreen();

    // Initialize subsystems
    initRendering();
    initGame();

    // Register callbacks
    glutDisplayFunc(displayStartScreen);
    glutIdleFunc(displayStartScreen);
    glutReshapeFunc(handleReshape);
    glutTimerFunc(0, handleTimer, 0);
    glutKeyboardFunc(handleKeyboard);
    glutSpecialFunc(handleSpecialKeyboard);
    glutMouseFunc(handleMouse);

    glutMainLoop();
    return 0;
}
