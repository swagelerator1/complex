#include "complex.h"
complex log(const complex c)  {
      return complex(log(abs(c)), arg(c));
    }