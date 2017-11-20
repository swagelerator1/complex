#include "complex.h"
complex sin(const complex c) { ////(e^ia - e^-1a)/2i
      return((pow(M_E, complex(0,1)*c)-pow(M_E, complex(0, -1)*c))/complex(0,2));
    }