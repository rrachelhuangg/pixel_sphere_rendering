
#ifndef RT_H
#define RT_H
#include "vp.h"

//ray type
typedef struct{
    VP_T origin;
    VP_T dir;
} RAY_T;

//sphere type
typedef struct{
    VP_T origin;
    double radius;
} SPHERE_T;

//ray type
typedef struct{
    double R;
    double G;
    double B;
} COLOR_T;

int intersect_sphere(RAY_T ray, SPHERE_T sphere, double *t, VP_T *inter_pt, VP_T *normal);

COLOR_T illuminate(RAY_T ray, VP_T inter_pt, COLOR_T obj_color, VP_T normal, VP_T light_loc);

COLOR_T trace(RAY_T ray, SPHERE_T sphere, COLOR_T sphere_color, VP_T light_loc);

#endif

