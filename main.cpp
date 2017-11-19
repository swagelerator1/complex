#include "complexACP.hpp"

using namespace std;

int main() {
  //declare two complex numbers
  complex c(3, 4);
  complex co(5, 3);
  
  //test *= overload
  c *= co;

  //test methods
  cout << c.abs(c) << endl;
  cout << c.arg(c) << endl;
  cout << c.log(c) << endl;

  //end
  return 0;
}