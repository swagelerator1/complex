#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <math.h>
class complex {
  public:
    double a, b;
	
	complex(double aa, double bb);
    complex(double aa);

    complex operator+(const complex& c);
    complex operator+(double d);
    complex operator-(const complex& c);
    complex operator-(double d);
    complex operator*(const complex& c);
    complex operator*(const double d);
    complex operator/(const double d);
    complex operator/(const complex& c);
    complex operator=(const complex& c);
    complex operator+=(const complex& c);
    complex operator+=(double d);
    complex operator-=(const complex& c);
    complex operator-=(double d);
    complex operator*=(const complex& c);
    complex operator*=(double d);
    complex operator/=(const complex& c);
    complex operator/=(double d);
    bool operator==(const complex& c);
    bool operator!=(const complex& c);
};

complex operator+(double d, const complex& c);
complex operator-(double d, const complex& c);
complex operator*(double d, const complex& c);
complex operator/(double d, const complex& c);

complex conj(const complex& c);

double real(const complex& c);
double imag(const complex& c);
	
double arg(const complex c);
double norm(const complex& c);
double abs(const complex c);
complex sqrt(const complex& c);
complex polar(double mag, double ang);

complex pow(double ba, const complex ex);
complex pow(const complex& c, int ex);
complex pow(const complex& c, double ex);
complex pow(const complex& ba, const complex& ex);

complex exp(const complex& c);

complex log(const complex c);
complex log10(const complex c);

complex sin(const complex c);
complex cos(const complex c);
complex tan(const complex c);

complex asin(const complex c);
complex acos(const complex c);
complex atan(const complex c);

#endif