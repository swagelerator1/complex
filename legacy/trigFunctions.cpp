  complex sin(const complex c) { ////(e^ia - e^-1a)/2i
      return((pow(M_E, complex(0,1)*c)-pow(M_E, complex(0, -1)*c))/complex(0,2));
    }
    
    complex cos(const complex c) { //(e^ia + e^-1a)/2
      return((pow(M_E, complex(0,1)*c)+pow(M_E, complex(0, -1)*c))/2);
    }
    
    complex tan(const complex c) { //sin(theta)/cos(theta)
      return(sin(c)/cos(c));
    }
    
    //arcfunctions http://www.suitcaseofdreams.net/inverse_functions.htm
    
    complex asin(const complex c) { //arcsin(z) = -iln(iz + sqrt(1+z^2))
      return(-1.0*complex(0,1)*log(complex(0,1)*c + sqrt(1.0+c^2)));
    }
    
    complex acos(const complex c) { //arccos(z) = -iln(z + sqrt(z^2-1))
      return(-1.0*complex(0,1)*log(c + sqrt(c^2-1)));
    }
    
    complex atan(const complex c) { //arctan(z) = 1/2(ln(1 - iz) - (ln(1 + iz))
      return((1/2)*(ln(1.0-complex(0,1)*c)- (ln(1.0 + complex(0,1)*c))));
    }