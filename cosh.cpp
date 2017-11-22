#include "complex.h"
complex cosh(const complex& c) {
	return cosh(c.a)*cos(c.b)+complex(0, 1)*sinh(c.a)*sin(c.b);
}