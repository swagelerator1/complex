#include "complex.h"
complex sqrt(const complex& c) {
	return (c + (abs(c)))*sqrt(abs(c))/(abs(c + abs(c)));
}