#include "complex.h"
double complex::arg(const complex c) {
      return std::atan(c.b/c.a);
    }