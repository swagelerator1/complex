#include "complex.h"
complex cos(const complex c) { //(e^ia + e^-1a)/2
      return((pow(M_E, complex(0,1)*c)+pow(M_E, complex(0, -1)*c))/2);
    }