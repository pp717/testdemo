#include <mpirxx.h>
#include <iostream>

int main (void)
{
	mpz_class a, b, c;
	a = "12345678901234567890123456789012345678901234567890123456789012345678901234567"; //10^77
	b = "-999999999999999999999";
	c = a+b;
	std::cout << "a = " << a << "\n";
	std::cout << "b = " << b << "\n";
	std::cout << "a+b is " << c << "\n";
	std::cout << "absolute value is " << abs(c) << "\n";
	std::cout << "a*b is " << a*b << "\n";
	std::cout << "absolute value is " << abs(a*b) << "\n";
	return 0;
}