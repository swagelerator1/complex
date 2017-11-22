#include "complex.h"
complex atan(const complex c) { //arctan(z) = 1/2(ln(1 - iz) - (ln(1 + iz))
      complex i(0,1);
	  return((i/2)*(log(1.0-i*c)-(log(1.0 + i*c))));
    }