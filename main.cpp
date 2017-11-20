#include "complexACP.hpp"

using namespace std;

int main() {
  //declare two complex numbers
  complex c(3, 4);
  complex co(5, 3);
  
  //test *= overload
  //c *= co;

  //test methods
  cout << cos(c) << endl;
  cout << log(c) << endl;
  cout << imag(c) << endl;

  //end
  return 0;
}