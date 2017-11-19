#include "complex.h"
complex complex::conj(const complex& c) {
      return complex(c.a, -c.b);
    }