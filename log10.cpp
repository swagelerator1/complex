#include "complex.h"
complex complex::log10(const complex c)  {
      return complex::log(c)/std::log(10);
    }