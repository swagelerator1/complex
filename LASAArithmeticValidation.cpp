#include <iostream>
#include "complexno.h"

int main()
{
    complex x(3,3), y(4,4);
    complex i(1,1), j(2,1);
    complex m(1,0), n(2,0);
	
	cout << "Real n = " << real(n) << ", imag n = " << imag(n) << endl;
	cout << "Real j = " << real(j) << ", imag j = " << imag(j) << endl;
	
	if (x == x)
	{
		cout << "(x == x) is correct" << endl;
	}
	else
	{
		cout << "(x == x) is wrong!" << endl;
	}
	if (x != y)
	{
		cout << "(x != y) is correct" << endl;
	}
	else
	{
		cout << "(x != x) is wrong!" << endl;
	}

    complex z = x + y;
    cout << "x=" << x << ", y=" << y << ", z=" << z << endl;

	if (y == z - x)
		cout << "Correct subtraction: " << z << " - " << x << " == " << z-x << endl;
	else
		cout << "Wrong subtraction: " << z << " - " << x << " == " << z-x << endl;

    z = x * y;
    cout << "x=" << x << ", y=" << y << ", z=" << z << endl;

	if (y == z/x)
		cout << "Correct division: " << z << "/" << x << " == " << z/x << endl;
	else
		cout << "Wrong division: " << z << "/" << x << " == " << z/x << endl;
		
	z = abs(x - y);

    cout << "x = " << x << ", y =" << y << ", z =" << z << endl;

    z = pow(j, 2);
	
    cout << "i = " << i << ", j = " << j << ", z = " << z << endl;

	if (j * j == z)
		cout << "Correct pow(): " << z << " pow " << j << endl;
	else
		cout << "Wrong pow(): " << z << " pow " << j << endl;
		

	//
	// Add additional tests for the specific funtions your team completed.
	//
    //test methods
    cout << endl << endl << "TEST ALL METHODS" << endl << "----------------" << endl;
    cout << (log(1.0-i*x)-(log(1.0 + i*x))) << endl;
    cout << (log(1.0 + complex(0,1)*x)) << endl;
    cout << "abs(x): " << abs(x) << endl;
    cout << "acos(x): " << acos(x) << endl;
    cout << "arg(x): " << arg(x) << endl;
    cout << "asin(x): " << asin(x) << endl;
    cout << "atan(x): " << atan(x) << endl; 
    cout << "conj(x): " << conj(x) << endl;
    cout << "cos(x): " << cos(x) << endl;
    cout << "cosh(x): " << cosh(x) << endl; 
    cout << "exp(x): " << exp(x) << endl; 
    cout << "imag(x): " << imag(x) << endl;
    cout << "log(x): " << log(x) << endl;
    cout << "log10(x): " <<log10(x) << endl;
    cout << "norm(x): " << norm(x) << endl;
    cout << "polar(10, 45): " << polar(10.0, 45.0) << endl;
    cout << "pow(x, 2.0): " << pow(x, 2.0) << endl;
    cout << "pow(2.0, x): " << pow(2.0, x) << endl;
    cout << "pow(x, -1): " << pow(x, -1) << endl;
    cout << "pow(x, y):" << pow(x, y) << endl;
    cout << "real(x): " << real(x) << endl;
    cout << "sin(x): " << sin(x) << endl;
    cout << "sinh(x): " << sinh(x) << endl; 
    cout << "sqrt(x): " << sqrt(x) << endl;
    cout << "tan(x): " << tan(x) << endl;
    cout << "tanh(x): " << tanh(x) << endl; 


}


