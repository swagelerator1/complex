#include "complex.h"
complex conj(const complex& c) {
      return complex(c.a, -c.b);
    }