#include <iostream>

int main() 
{
	int i = 42;
	if (i)
		std::cout << "42 is true" << std::endl;
	i = 0;
	if (i)
		std::cout << "0 is true" << std::endl;
	
	unsigned u = 10;
	i = -42;
	std::cout << "-42 + -42 = " << i + i << std::endl;
	std::cout << "u10 + -42 = " << u + i << std::endl;
	
	unsigned u1 = 42, u2 = 10;
	std::cout << "u42 - u10 = " << u1 - u2 << std::endl;
	std::cout << "u10 - u42 = " << u2 - u1 << std::endl;
	
	std::cout << "for loop" << std::endl;
	int counter = 11;
	for (unsigned u = 10; u >= 0; --u) {
		std::cout << u << std::endl;
		counter--;
		if (counter < 0) break;
	}
	
	std::cout << "while loop" << std::endl;
	unsigned u3 = 11;
	while (u3 > 0) {
		--u3;
		std::cout << u3 << std::endl;
	}
	
	return 0;
}