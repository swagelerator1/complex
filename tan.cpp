#include "complex.h"
complex tan(const complex c) { //sin(theta)/cos(theta)
      complex i(0, 1);
	  return (exp(2*i*c)-1)/(i*(exp(2*i*c)+1));
    }