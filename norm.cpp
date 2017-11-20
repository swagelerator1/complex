#include "complex.h"
double norm(const complex& c) {
      return sqrt((c*conj(c)).a);
    }