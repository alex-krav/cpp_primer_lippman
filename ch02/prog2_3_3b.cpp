#include <iostream>

int main()
{
	int i = 42;
	int *p;
	int *&r = p;
	
	p = &i;
	*r = -100;
	
	//&r = p2;
	
	std::cout << "i=" << i << std::endl;
	
	return 0;
}