

#ifndef __MATRIX_TRANSFORM_H
#define __MATRIX_TRANSFORM_H

#include "matrix.h"

float to_radians(float value);
float to_radiansPI(float value);

Matrix4 mat4_rotate(float radians, int space);

Matrix4 mat4_scale(float value);
Matrix4 mat4_scale_xyz(float x, float y, float z);

Matrix4 mat4_translate(float x, float y, float z);

#endif