#include <iostream>

int main() 
{
	unsigned u = 10, u2 = 42;
	std::cout << "u42 - u10 = " << u2 - u << std::endl;
	std::cout << "u10 - u42 = " << u - u2 << std::endl;
	
	int i = 10, i2 = 42;
	std::cout << "42 - 10 = " << i2 - i << std::endl;
	std::cout << "10 - 42 = " << i - i2 << std::endl;
	
	std::cout << "10 - u10 = " << i - u << std::endl;
	std::cout << "u10 - 10 = " << u - i << std::endl;
	
	return 0;
}