#include "complex.h"
complex polar(double mag, double ang) {
      return complex(mag*std::cos(ang), mag*sin(ang));
    }