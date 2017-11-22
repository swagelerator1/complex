#include "complex.h"
complex asin(const complex c) { //arcsin(z) = -iln(iz + sqrt(1+z^2))
      complex i(0, 1);
	  return -1*i*log(i*c+sqrt(1-pow(c, 2.0)));
    }