#include <math.h>
#include <iostream>
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
    
    string dtos(double d) {	
			string str = "";
			if(d < 0) {
			  str = "-";
			  d *= -1;
			}
			int a = (int) std::log10(d);
			int cnt = 0;
			while(d != 0) {
				str += (char) 48 + ((int) d/(std::pow(10, (double) a)));
				d = fmod(d, std::pow(10, (double) a));
				cnt++;
				if(cnt == a+1) str += '.';
				d*= 10;
			}
			return str;
		}

    complex operator*(const complex& c) const {
      double na = this->a*c.a - this->b*c.b;
      double nb = this->a*c.b + this->b*c.a;
      return complex(na, nb);
    }
    
    complex operator*(double d) const {
      return complex(this->a*d, this->b*d);
    }
    
    complex operator/(double d) const {
      return complex(this->a/d, this->b/d);
    }
    
    complex operator=(const complex& c) {
      this->a = c.a;
      this->b = c.b;
    }
    
    complex operator+=(const complex& c) {
      this->a += c.a;
      this->b += c.b;
    }
    
    complex operator-=(const complex& c) {
      this->a -= c.a;
      this-> b -= c.b;
    }
    
    complex operator*=(const complex& c) const {
      double na = this->a*c.a - this->b*c.b;
      double nb = this->a*c.b + this->b*c.a;
      return complex(na, nb);
    }
    
    complex operator/=(const complex& c) const {
      complex ct = c;
      ct.b *= -1;
      complex ca(this->a, this->b);
      ca *= ct;
      ct *= c;
      return(ca/ct.a);
    }
};

ostream& operator <<(ostream& os, const complex& c) {
        complex y(0, 0);
        cout << y.dtos(c.a) + " + " + y.dtos(c.b) + "i"; 
      }

