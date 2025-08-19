#define _USE_MATH_DEFINES // for C
#include <math.h>

#include "vectorMath.h"

#define __SETFUN_VECTOR_SIZE(__num__)   \
float vec##__num__##_size(Vector##__num__ vec)    \
{   \
    float size = 0.0f;  \
    \
    for (char i = 0; i < __num__; i++)  \
    {   \
        size += vec.arr[i] * vec.arr[i];    \
    }   \
    size = sqrtf(size); \
    return size;    \
}

__SETFUN_VECTOR_SIZE(4);
__SETFUN_VECTOR_SIZE(3);
__SETFUN_VECTOR_SIZE(2);

#define __SETFUN_VECTOR_NORM(__num__)   \
Vector##__num__ vec##__num__##_norm(Vector##__num__ vec)    \
{   \
    float size = vec##__num__##_size(vec);  \
    \
    for (char i = 0; i < __num__; i++)  \
    {   \
        vec.arr[i] = vec.arr[i] / size;    \
    }   \
    return vec;    \
}

__SETFUN_VECTOR_NORM(4);
__SETFUN_VECTOR_NORM(3);
__SETFUN_VECTOR_NORM(2);

Vector3 vec3_cross(Vector3 vec1, Vector3 vec2) 
{
    Vector3 out = {
        vec1.arr[1] * vec2.arr[2] - vec1.arr[2] * vec2.arr[1],
        vec1.arr[2] * vec2.arr[0] - vec1.arr[0] * vec2.arr[2],
        vec1.arr[0] * vec2.arr[1] - vec1.arr[1] * vec2.arr[0]
    };

    return out;
};

#define __SETFUN_VECTOR_DOT(__num__)   \
float vec##__num__##_dot(Vector##__num__ vec1, Vector##__num__ vec2)    \
{   \
    float dot = 0.0f;  \
    \
    for (char i = 0; i < __num__; i++)  \
    {   \
        dot += vec1.arr[i] * vec2.arr[i];    \
    }   \
    return dot;    \
}

__SETFUN_VECTOR_DOT(4);
__SETFUN_VECTOR_DOT(3);
__SETFUN_VECTOR_DOT(2);

#define __SETFUN__VECTOR_SUM(__num__)   \
Vector##__num__ vec##__num__##_sum(Vector##__num__ vec1, Vector##__num__ vec2)    \
{   \
    Vector##__num__ out;    \
    \
    for (char i = 0; i < __num__; i++)  \
    {   \
        out.arr[i] = vec1.arr[i] + vec2.arr[i];    \
    }   \
    return out;    \
}

__SETFUN__VECTOR_SUM(4);
__SETFUN__VECTOR_SUM(3);
__SETFUN__VECTOR_SUM(2);

#define __SETFUN__VECTOR_MUL(__num__)   \
Vector##__num__ vec##__num__##_mul(Vector##__num__ vec, float value)    \
{   \
    Vector##__num__ out;    \
    \
    for (char i = 0; i < __num__; i++)  \
    {   \
        out.arr[i] = vec.arr[i] * value;    \
    }   \
    return out;    \
}

__SETFUN__VECTOR_MUL(4);
__SETFUN__VECTOR_MUL(3);
__SETFUN__VECTOR_MUL(2);