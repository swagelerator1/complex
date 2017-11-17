complex sin(const complex c) { //(e^ia - e^-1a)/2i
      return((pow(M_E, complex(0,1)*c)-pow(M_E, complex(0, -1)*c))/complex(0,2));
    }
    
    complex cos(const complex c) { //(e^ia + e^-1a)/2
      return((pow(M_E, complex(0,1)*c)+pow(M_E, complex(0, -1)*c))/2;
    }
    
    complex tan(const complex c) { //sin(theta)/cos(theta)
      return(sin(c)/cos(c));
    }