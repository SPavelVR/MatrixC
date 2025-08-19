
#ifndef __MATRIX_MATH_H
#define __MATRIX_MATH_H

#include "matrix.h"

Matrix4 mat4_mul_value(Matrix4 mat, float value);
Matrix3 mat3_mul_value(Matrix3 mat, float value);
Matrix2 mat2_mul_value(Matrix2 mat, float value);

Matrix4 mat4_mul(Matrix4 mat1, Matrix4 mat2);
Matrix3 mat3_mul(Matrix3 mat1, Matrix3 mat2);
Matrix2 mat2_mul(Matrix2 mat1, Matrix2 mat2);

Matrix4 mat4_transpose(Matrix4 mat);
Matrix3 mat3_transpose(Matrix3 mat);
Matrix2 mat2_transpose(Matrix2 mat);

#endif