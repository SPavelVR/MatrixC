
#ifdef __cplusplus
extern "C" {
#endif

#ifndef __MATRIX_H
#define __MATRIX_H

typedef union
{
    float arr[4][4];
    struct
    {
        float x1, x2, x3, x4, y1, y2, y3, y4, z1, z2, z3, z4, w1, w2, w3, w4;
    };
} Matrix4;

typedef union
{
    float arr[3][3];
    struct
    {
        float x1, x2, x3, y1, y2, y3, z1, z2, z3;
    };
} Matrix3;

typedef union
{
    float arr[2][2];
    struct
    {
        float x1, x2, y1, y2;
    };
} Matrix2;

typedef union
{
    float arr[4];
    struct
    {
        float x, y, z, w;
    };
} Vector4;

typedef union
{
    float arr[3];
    struct
    {
        float x, y, z;
    };
} Vector3;

typedef union
{
    float arr[2];
    struct
    {
        float x, y;
    };
} Vector2;

#include "initMatrix.h"
#include "matrixMath.h"
#include "matrixTransform.h"

#include "vectorMath.h"
#include "VMMath.h"

#include "matrixOpenGL.h"

#endif

#ifdef __cplusplus
}
#endif