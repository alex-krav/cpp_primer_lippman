#include <iostream>

int main()
{
	int i = 42;
	int *pi = 0;
	int *pi2 = &i;
	int *pi3;
	
	pi3 = pi2;
	pi2 = 0;
	
	//std::cout << *pi << std::endl; // Segmentation fault
	//std::cout << *pi2 << std::endl; // Segmentation fault 
	std::cout << *pi3 << std::endl; // 42
	
	return 0;
}