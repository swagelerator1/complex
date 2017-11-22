#include "complexACP.hpp"

using namespace std;

int main() {
  //declare two complex numbers for testing
  complex c(3, 4);
  complex co(5, 3);
  cout << "c = " << c << endl;
  cout << "co = " << co << endl << endl;
  
  //test methods
  
  cout << "abs(c): " << abs(c) << endl;
  cout << "acos(c): " << acos(c) << endl;
  cout << "arg(c): " << arg(c) << endl;
  cout << "asin(c): " << asin(c) << endl; //Wrong
  cout << "atan(c): " << atan(c) << endl; //Wrong
  cout << "conj(c): " << conj(c) << endl;
  cout << "cos(c): " << cos(c) << endl;
  cout << "cosh(c): " << cosh(c) << endl; 
  cout << "exp(c): " << exp(c) << endl; 
  cout << "imag(c): " << imag(c) << endl;
  cout << "log(c): " << log(c) << endl;
  cout << "log10(c): " <<log10(c) << endl;
  cout << "norm(c): " << norm(c) << endl;
  cout << "polar(10, 45): " << polar(10.0, 45.0) << endl;
  cout << "pow(c, 2.0): " << pow(c, 2.0) << endl;
  cout << "pow(2.0, c): " << pow(2.0, c) << endl;
  cout << "pow(c, 2): " << pow(c, 2) << endl;
  cout << "pow(c, co):" << pow(c, co) << endl;
  cout << "real(c): " << real(c) << endl;
  cout << "sin(c): " << sin(c) << endl;
  cout << "sinh(c): " << sinh(c) << endl; 
  cout << "sqrt(c): " << sqrt(c) << endl;
  cout << "tan(c): " << tan(c) << endl;
  cout << "tanh(c): " << tanh(c) << endl; 

  //
  //test basic operator overloads
  //
  cout << "c + co = " << c + co << endl;
  cout << "c - co = " << c - co << endl;
  cout << "c * co = " << c * co << endl;
  cout << "c / co = " << c / co << endl;

  //
  //test assignment overloads
  //
  c += co;
  c -= co;
  c *= co;
  c /= co;

  //
  //test equality overloads
  //
  if(c == c) cout << "true" << endl;
  if (c != co) cout << "false" << endl;

  return 0;
}