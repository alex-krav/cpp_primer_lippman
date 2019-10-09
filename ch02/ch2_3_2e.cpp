#include <iostream>

int main()
{
	int ival = 42;
	int *pi = &ival;
	*pi = 0;
	
	std::cout << ival << std::endl; // 0
	
	return 0;
}