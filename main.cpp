#include <iostream>
#include <math.h>
#include "complex.cpp"

using namespace std;

int main() {
  complex c(3, 4);
  complex co(5, 3);
  c *= co;
  cout << c;
}