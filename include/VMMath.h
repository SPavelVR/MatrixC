

#ifndef __VECTOR_MATRIX_MATH_H
#define __VECTOR_MATRIX_MATH_H

#include "matrix.h"

Vector4 vm4_mul(Matrix4 mat, Vector4 vec);
Vector3 vm3_mul(Matrix3 mat, Vector3 vec);
Vector2 vm2_mul(Matrix2 mat, Vector2 vec);

#endif