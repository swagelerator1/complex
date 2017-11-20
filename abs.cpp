#include "complex.h"
double abs(const complex c) {
      return sqrt(pow(c.a, 2) + pow(c.b, 2));
}
