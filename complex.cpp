#include <iostream>
#include <math.h>
#include "pow.h"
using namespace std;

class complex {
  public:
    double a, b;
    complex(double aa, double bb) {
      a = aa;
      b = bb;
    }
    
    complex(double aa) {
      a = aa;
      b = 0;
    }
	
    complex operator+(const complex& c) {
      double na = this->a + c.a;
      double nb = this->b + c.b;
      return complex(na, nb);
    }
    
    complex operator+(double d) {
      double na = this->a + d;
      return complex(na, this->b);
    }
    
    complex operator-(const complex& c) {
      double na = this->a - c.a;
      double nb = this->b - c.b;
      return complex(na, nb);
    }
    
    complex operator-(double d) {
      double na = this->a - d;
      return complex(na, this->b);
    }
    
    complex operator*(const complex& c) const {
      double na = a*c.a - b*c.b;
      double nb = a*c.b + b*c.a;
      return complex(na, nb);
    }
    
    complex operator*(const double d)  {
      return complex(this->a*d, this->b*d);
    }
    
    complex operator/(const double d)  {
      return complex(this->a/d, this->b/d);
    }
    
    complex operator/(const complex& c) {
            complex i(0, 1);
            complex o(this->a, this->b);
            o *= pow(c, -1.0);
            return o;
    }
    
    complex operator=(const complex& c) {
      this->a = c.a;
      this->b = c.b;
    }
    
    complex operator+=(const complex& c) {
      this->a += c.a;
      this->b += c.b;
    }
    
    complex operator+=(double d) {
      this->a += d;
    }
    
    complex operator-=(const complex& c) {
      this->a -= c.a;
      this-> b -= c.b;
    }
    
    complex operator-=(double d) {
      this->a -= d;
    }
    
    complex operator*=(const complex& c) {
      double na = this->a*c.a - this->b*c.b;
      double nb = this->a*c.b + this->b*c.a;
      this->a = na;
      this->b = nb;
    }
    
    complex operator*=(double d) {
      this->a *= d;
      this->b *= d;
    }
    
    complex operator/=(const complex& c) {
      complex ct = c;
      ct.b *= -1;
      complex ca(this->a, this->b);
      ca *= ct;
      ct *= c;
      return(ca/ct.a);
    }
    
    complex operator/=(double d) {
      this->a /= d;
      this->b /= d;
    }
    
    bool operator==(const complex& c) {
      if(this->a == c.a && this->b == c.b) return true;
      return false;
    }
    
    bool operator!=(const complex& c) {
      if(this->a != c.a || this->b != c.b) return true;
      return false;
    }
};

ostream& operator <<(ostream& os, const complex& c) {
        cout << c.a << " + "  << c.b << "i"; 
      }

