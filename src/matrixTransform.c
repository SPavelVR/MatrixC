#define _USE_MATH_DEFINES // for C
#include <math.h>

#include "matrixTransform.h"

float to_radians(float value)
{
    return M_PI * (value / 180.0f);
}

Matrix4 mat4_rotade(float radians, int space)
{
    Matrix4 out = initEMatrix4(1.0f);
    
    float mass[] = {cos(radians), -sin(radians), sin(radians), cos(radians)};
    int index = 0;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == space || i == space) continue;
            out.arr[i][j] = mass[index];
            index++;
        }
        if (index == 4) break;
    }
    return out;
}

Matrix4 mat4_scale(float value) 
{
    Matrix4 out = initEMatrix4(1.0f);

    for (int i = 0; i < 3; i++) {
        out.arr[i][i] = value;
    }
    return out;
};

Matrix4 mat4_scale_xyz(float x, float y, float z) 
{
    Matrix4 out = initEMatrix4(1.0f);

    out.arr[0][0] = x;
    out.arr[1][1] = y;
    out.arr[2][2] = z;

    return out;
};

Matrix4 mat4_translate(float x, float y, float z)
{
    Matrix4 out = initEMatrix4(1.0f);

    out.arr[3][0] = x;
    out.arr[3][1] = y;
    out.arr[3][2] = z;

    return out;
}