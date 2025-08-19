

#ifndef __VECTOR_MATH_H
#define __VECTOR_MATH_H

#include "matrix.h"

float vec4_size(Vector4 vec);
float vec3_size(Vector3 vec);
float vec2_size(Vector2 vec);

Vector4 vec4_norm(Vector4 vec);
Vector3 vec3_norm(Vector3 vec);
Vector2 vec2_norm(Vector2 vec);

Vector3 vec3_cross(Vector3 vec1, Vector3 vec2);

float vec4_dot(Vector4 vec1, Vector4 vec2);
float vec3_dot(Vector3 vec1, Vector3 vec2);
float vec2_dot(Vector2 vec1, Vector2 vec2);

Vector4 vec4_sum(Vector4 vec1, Vector4 vec2);
Vector3 vec3_sum(Vector3 vec1, Vector3 vec2);
Vector2 vec2_sum(Vector2 vec1, Vector2 vec2);

Vector4 vec4_mul(Vector4 vec, float value);
Vector3 vec3_mul(Vector3 vec, float value);
Vector2 vec2_mul(Vector2 vec, float value);

#endif