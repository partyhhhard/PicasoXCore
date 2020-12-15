/** Copyright (C) 2016 Ultimaker - Copyright (c) 2020 PICASO 3D - Released under terms of the AGPLv3 License */

#ifndef UTILS_MATH_H
#define UTILS_MATH_H

#include <cmath>


//c++11 no longer defines M_PI, so add our own constant.
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

namespace cura
{

const double _ESPSILON_ = 0.0000000001;

static constexpr float sqrt2 = 1.41421356237;

template<typename T> inline T square(const T& a) { return a * a; }

inline unsigned int round_divide(unsigned int dividend, unsigned int divisor) //!< Return dividend divided by divisor rounded to the nearest integer
{
    return (dividend + divisor / 2) / divisor;
}
inline unsigned int round_up_divide(unsigned int dividend, unsigned int divisor) //!< Return dividend divided by divisor rounded to the nearest integer
{
    return (dividend + divisor - 1) / divisor;
}


bool isEqual( double _a, double _b ) {
    if( fabs( _a - _b ) < _EPSILON_ ) return true;
    return false;
}

}//namespace cura
#endif // UTILS_MATH_H

