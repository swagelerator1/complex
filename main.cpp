/*#include <iostream>
#include <math.h>
#include "complex.cpp"
#include "abs.cpp"
#include "arg.cpp"
*/
#include "complexACP.hpp"
using namespace std;

int main() {
  complex c(3, 4);
  complex co(5, 3);
  c *= co;
  cout << abs(c) << endl;
  cout << arg(c) << endl;
  cout << log(c) << endl;
  return 0;
}