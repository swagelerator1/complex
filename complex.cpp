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
    
    double abs(const complex c) const {
      return sqrt(std::pow(c.a, 2) + std::pow(c.b, 2));
    }
    
    double imag(const complex& c) {
      return c.b;
    }
    
    double real(const complex& c) {
      return c.a;
    }
    
    double arg(const complex c) const {
      return std::atan(c.b/c.a);
    }
    
    complex pow(double ba, const complex ex) const {
      const complex i(0, 1);
      complex c(std::pow(ba, ex.a)*std::cos(ex.b*std::log(ba)));
      c += i*std::pow(ba, ex.a)*std::sin(ex.b*std::log(ba));
      return c;
    }
    
    complex pow(const complex& c, int ex) const {
      complex h = c;
      for(int x = 0; x < ex-1; x++) h = c*h;
      return h;
    }
    
    complex log(const complex c) const {
      return complex(std::log(c.abs(c)), c.arg(c));
    }
    
    complex log10(const complex c) const {
      return log(c)/std::log(10);
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

int main() {
  complex c(3, 4);
  complex co(5, 3);
  c += co;
  cout << c;
}