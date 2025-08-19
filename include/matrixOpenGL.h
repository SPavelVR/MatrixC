
#ifndef __MATRIX4_OPENGL_H
#define __MATRIX4_OPENGL_H

#include "matrix.h"


Matrix4 mat4_perspectiv(float fovY, float aspect, float zNear, float zFar);
Matrix4 mat4_ortho(float width, float height, float line);
Matrix4 mat4_look_at(Vector3 eye, Vector3 center, Vector3 up);

#endif