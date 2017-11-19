#include "complex.h"
complex complex::sqrt(const complex& c) {
	return (c + (complex::abs(c)))*std::sqrt(complex::abs(c))/(complex::abs(c + complex::abs(c)));
}