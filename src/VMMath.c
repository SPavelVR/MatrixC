
#include "VMMath.h"

#define __SETFUN_VM_MUL(__num__)    \
Vector##__num__ vm##__num__##_mul(Matrix##__num__ mat, Vector##__num__ vec) \
{   \
    Vector##__num__ out;    \
    \
    for (char i = 0; i < __num__; i++)  \
    {   \
        out.arr[i] = 0.0f;  \
        for (char j = 0; j < __num__; j++)  \
        {   \
            out.arr[i] += mat.arr[i][j] * vec.arr[j];   \
        }   \
    }   \
    return out; \
}

__SETFUN_VM_MUL(4);
__SETFUN_VM_MUL(3);
__SETFUN_VM_MUL(2);