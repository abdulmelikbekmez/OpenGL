#ifndef TEXTURE_H
#define SHADER_H

#include "glad/glad.h"

#include <string>

class Texture
{
private:
    GLuint ID;

public:
    Texture(const char *filename, bool isPng);
    ~Texture();
    GLuint getId();
};

#endif