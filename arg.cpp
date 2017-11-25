#include "complex.h"
double arg(const complex c) {
	double t = atan(c.b/c.a);
	if(t < 0 && c.a < 0) return M_PI+t;
	else return t;
    }