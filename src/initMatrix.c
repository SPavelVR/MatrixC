
#include "initMatrix.h"

#define __SETFUN_INITMATRIX(__num__)    \
Matrix##__num__ initMatrix##__num__(float value)    \
{   \
    Matrix##__num__ cop;    \
    \
    for (char i = 0; i < __num__; i++)  \
    {   \
        for (char j = 0; j < __num__; j++)  \
        {   \
            cop.arr[i][j] = value;  \
        }   \
    }   \
    \
    return cop; \
}

__SETFUN_INITMATRIX(4);
__SETFUN_INITMATRIX(3);
__SETFUN_INITMATRIX(2);

#define __SETFUN_INITEMATRIX(__num__)    \
Matrix##__num__ initEMatrix##__num__(float value)    \
{   \
    Matrix##__num__ cop;    \
    \
    for (char i = 0; i < __num__; i++)  \
    {   \
        for (char j = 0; j < __num__; j++)  \
        {   \
            cop.arr[i][j] = 0.0f;  \
            if (i == j) \
            {   \
                cop.arr[i][j] = value;  \
            }   \
        }   \
    }   \
    \
    return cop; \
}

__SETFUN_INITEMATRIX(4);
__SETFUN_INITEMATRIX(3);
__SETFUN_INITEMATRIX(2);
