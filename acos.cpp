#include "complex.h"
complex acos(const complex c) { //arccos(z) = -iln(z + sqrt(z^2-1))
      return(complex(0,-1)*log(c + sqrt(pow(c, 2)-1)));
    }