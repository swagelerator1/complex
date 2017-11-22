#include "complex.h"
complex tanh(const complex& c) {
	return (tanh(c.a)+complex(0, 1)*tan(c.b))/(1 + complex(0, 1)*tanh(c.a)*tan(c.b));
}