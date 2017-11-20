#include "complex.h"
double abs(const complex c) {
      return std::sqrt(std::pow(c.a, 2) + std::pow(c.b, 2));
}
