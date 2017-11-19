#include "complex.h"
double complex::abs(const complex c) {
      return sqrt(std::pow(c.a, 2) + std::pow(c.b, 2));
}
