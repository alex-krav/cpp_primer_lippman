#include <iostream>

int main() 
{
	bool b = 42;
	int i = b;
	std::cout << "int i = " << i << std::endl;
	i = 3.14;
	double pi = i;
	std::cout << "double pi = " << pi << std::endl;
	unsigned char c = -1;
	std::cout << "unsigned char = " << c << std::endl;
	signed char c2 = 255; // 256 - overflow
	std::cout << "signed char = " << c2 << std::endl;
	return 0;
}