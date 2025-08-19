#define _USE_MATH_DEFINES // for C
#include <math.h>

#include "matrixOpenGL.h"

Matrix4 mat4_perspectiv(float fov, float aspect, float near, float far) {
    Matrix4 out = initMatrix4(0.0f);
    fov = tanf(fov * 0.5f);
    float afov = fov * aspect;

    out.arr[0][0] = 1 / afov;
    out.arr[1][1] = 1 / fov;
    out.arr[2][2] = (far + near) / (near - far); out.arr[2][3] = -1;
    out.arr[2][3] = (2 * far * near) / (near - far);
    out.arr[3][2] = -1.0f;

    return out;
};

Matrix4 mat4_ortho(float width, float height, float line) {
    Matrix4 out = initEMatrix4(1.0f);
    
    out.arr[0][0] = 2.0f / width;
    out.arr[1][1] = 2.0f / height;
    out.arr[2][2] = -2.0f / line;
    out.arr[2][3] = -1.0f;

    return out;
}

Matrix4 mat4_look_at(Vector3 eye, Vector3 center, Vector3 up) {

    Matrix4 out = initEMatrix4(0.0f);
    
    Vector3 f = {
        center.arr[0] - eye.arr[0],
        center.arr[1] - eye.arr[1],
        center.arr[2] - eye.arr[2]
    };
    f = vec3_norm(f);

    Vector3 s = vec3_norm(vec3_cross(f, up));

    Vector3 u = vec3_cross(s, f);

    out.arr[0][0] = s.arr[0];
	out.arr[0][1] = s.arr[1];
	out.arr[0][2] = s.arr[2];
	out.arr[1][0] = u.arr[0];
	out.arr[1][1] = u.arr[1];
	out.arr[1][2] = u.arr[2];
	out.arr[2][0] =-f.arr[0];
	out.arr[2][1] =-f.arr[1];
	out.arr[2][2] =-f.arr[2];
	out.arr[0][3] =-vec3_dot(s, eye);
	out.arr[1][3] =-vec3_dot(u, eye);
	out.arr[2][3] = vec3_dot(f, eye);

    return out;
}