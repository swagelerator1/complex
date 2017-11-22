#include "complex.h"
complex sinh(const complex& c) {
		return sinh(c.a)*cos(c.b)+complex(0, 1)*cosh(c.a)*sin(c.b);
}