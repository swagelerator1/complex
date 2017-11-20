#include "complex.h"
complex asin(const complex c) { //arcsin(z) = -iln(iz + sqrt(1+z^2))
      return(-1.0*complex(0,1)*log(complex(0,1)*c + sqrt(1.0+pow(c, 2))));
    }