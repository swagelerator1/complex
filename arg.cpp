#include "complex.h"
double arg(const complex c) {
      return atan(c.b/c.a);
    }