#include "complexACP.hpp"

using namespace std;

int main() {
  //declare two complex numbers for testing
  complex c(3, 4);
  complex co(5, 3);
  
  //
  //test methods
  //
  cout << abs(c) << endl;
  cout << acos(c) << endl;
  cout << arg(c) << endl;
  cout << asin(c) << endl;
  cout << atan(c) << endl;
  cout << conj(c) << endl;
  cout << cos(c) << endl;
  //cout << cosh(c) << endl;  //NEED TO COMPLETE FUNCTION
  //cout << exp(c) << endl;  //UNDEFINED REFERENCE ERROR!
  cout << imag(c) << endl;
  cout << log(c) << endl;
  cout << log10(c) << endl;
  cout << norm(c) << endl;
  cout << polar(10.0, 45.0) << endl;
  cout << pow(c, 2.0) << endl;
  cout << pow(2.0, c) << endl;
  cout << pow(c, 2) << endl;
  cout << pow(c, co) << endl;
  cout << real(c) << endl;
  cout << sin(c) << endl;
  //cout << sinh(c) << endl;  //NEED TO COMPLETE FUNCTION
  cout << sqrt(c) << endl;
  cout << tan(c) << endl;
  //cout << tanh(c) << endl;  //NEED TO COMPLETE FUNCTION

  //
  //test basic operator overloads
  //
  cout << c + co << endl;
  cout << c - co << endl;
  cout << c * co << endl;
  cout << c / co << endl;

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