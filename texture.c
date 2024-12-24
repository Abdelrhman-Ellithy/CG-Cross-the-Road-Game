#include "texture.h"
#include <GL/gl.h>
#include <stb_image.h>
#include <stdio.h>

void loadTexture(const char *filePath, unsigned int *texture) {
    int width, height, nrChannels;
    unsigned char *data = stbi_load(filePath, &width, &height, &nrChannels, 0);

    if (data) {
        glGenTextures(1, texture);
        glBindTexture(GL_TEXTURE_2D, *texture);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);

        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    } else {
        printf("Failed to load texture: %s\n", filePath);
    }

    stbi_image_free(data);
}
