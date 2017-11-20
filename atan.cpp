#include "complex.h"
complex atan(const complex c) { //arctan(z) = 1/2(ln(1 - iz) - (ln(1 + iz))
      return((1/2)*(log(1.0-complex(0,1)*c)-(log(1.0 + complex(0,1)*c))));
    }