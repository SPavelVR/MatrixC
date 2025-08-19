
#include "matrixMath.h"

Matrix4 mat4_mul_value(Matrix4 mat, float value)
{
    Matrix4 cop;

    for (char i = 0; i < 4; i++)
    {
        for (char j = 0; j < 4; j++)
        {
            cop.arr[i][j] = mat.arr[i][j] * value;
        }
    }

    return cop;
};

Matrix3 mat3_mul_value(Matrix3 mat, float value)
{
    Matrix3 cop;

    for (char i = 0; i < 3; i++)
    {
        for (char j = 0; j < 3; j++)
        {
            cop.arr[i][j] = mat.arr[i][j] * value;
        }
    }

    return cop;
}

Matrix2 mat2_mul_value(Matrix2 mat, float value)
{
    Matrix2 cop;

    for (char i = 0; i < 2; i++)
    {
        for (char j = 0; j < 2; j++)
        {
            cop.arr[i][j] = mat.arr[i][j] * value;
        }
    }

    return cop;
}

#define __SETFUN_METRIXTRANSPOSE(__num__)   \
Matrix##__num__ mat##__num__##_transpose(Matrix##__num__ mat)   \
{   \
    Matrix##__num__ cop;    \
    for (char i = 0; i < __num__; i++)  \
    {   \
        for (char j = 0; j < __num__; j++)  \
        {   \
            cop.arr[j][i] = mat.arr[i][j];  \
        }   \
    }   \
    \
    return cop; \
}

__SETFUN_METRIXTRANSPOSE(4);
__SETFUN_METRIXTRANSPOSE(3);
__SETFUN_METRIXTRANSPOSE(2);

Matrix4 mat4_mul(Matrix4 mat1, Matrix4 mat2)
{
    Matrix4 cop;

    for (char i = 0; i < 4; i++)
    { 
        for (char j = 0; j <4; j++) 
        {
            cop.arr[i][j] = mat1.arr[i][0] * mat2.arr[0][j] +
                            mat1.arr[i][1] * mat2.arr[1][j] +
                            mat1.arr[i][2] * mat2.arr[2][j] +
                            mat1.arr[i][3] * mat2.arr[3][j] ;
        }
    }

    return cop;
}

Matrix3 mat3_mul(Matrix3 mat1, Matrix3 mat2)
{
    Matrix3 cop;

    for (char i = 0; i < 3; i++)
    { 
        for (char j = 0; j <3; j++) 
        {
            cop.arr[i][j] = mat1.arr[i][0] * mat2.arr[0][j] +
                            mat1.arr[i][1] * mat2.arr[1][j] +
                            mat1.arr[i][2] * mat2.arr[2][j] ;
        }
    }

    return cop;
}

Matrix2 mat2_mul(Matrix2 mat1, Matrix2 mat2)
{
    Matrix2 cop;

    for (char i = 0; i < 2; i++)
    { 
        for (char j = 0; j <2; j++) 
        {
            cop.arr[i][j] = mat1.arr[i][0] * mat2.arr[0][j] +
                            mat1.arr[i][1] * mat2.arr[1][j] ;
        }
    }

    return cop;
}