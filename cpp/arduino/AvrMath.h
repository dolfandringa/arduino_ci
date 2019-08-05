#pragma once
#include <math.h>

#define constrain(x,l,h) ((x)<(l)?(l):((x)>(h)?(h):(x)))
#define map(x,inMin,inMax,outMin,outMax) (((x)-(inMin))*((outMax)-(outMin))/((inMax)-(inMin))+outMin)

#define sq(x) ((x)*(x))

#define radians(deg) ((deg)*DEG_TO_RAD)
#define degrees(rad) ((rad)*RAD_TO_DEG)

#ifdef abs
#undef abs
#endif
#define abs(x) ((x)>0?(x):-(x))

#ifdef get_max
#undef get_max
#endif
#define get_max(a,b) ((a)>(b)?(a):(b))

#ifdef get_min
#undef get_min
#endif
#define get_min(a,b) ((a)<(b)?(a):(b))

