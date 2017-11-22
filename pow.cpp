#include "complex.h"

complex pow(double ba, const complex ex) { 
      const complex i(0, 1);
      complex c(pow(ba, ex.a)*cos(ex.b*log(ba)));
      c += i*pow(ba, ex.a)*sin(ex.b*log(ba));
      return c;
    }

complex pow(const complex& c, int ex) {
  complex h = c;
  bool neg = false;
  if(ex < 0) { neg = true; ex*=-1; }
  if(ex == 0) return complex(1);
  else for(int x = 0; x < ex-1; x++) h = c*h; 
  if(neg) h = complex(1)/h;
  return h;
}

complex pow(const complex& c, double ex) { 
  complex i(0, 1);
  return complex(pow(abs(c), ex))*pow(M_E, i*complex(ex)*arg(c));
}

complex pow(const complex& ba, const complex& ex) {
  const complex i(0, 1);
  return pow(M_E, (ex*log(abs(ba)))+(i*arg(ba)*ex));
}