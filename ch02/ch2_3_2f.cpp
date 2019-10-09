#include <iostream>

int main()
{
	int ival = 1024;
	int *pi = 0;
	int *pi2 = &ival;
	
	if (pi) 
		std::cout << "This will never happen" << std::endl;
	
	if (pi2) {
		std::cout << " pi2=" << pi2 << std::endl;
		std::cout << "*pi2=" << *pi2 << std::endl;
	}
	
	return 0;
}