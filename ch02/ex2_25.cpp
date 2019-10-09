#include <iostream>

int main()
{
	int* ip1, &r = ip1; // pointer to int, reference to int - ERROR
	int i, *ip2 = 0; // int, pointer to int = NULL
	int* ip3, ip4; // pointer to int, int 
	
	std::cout << "ip1=" << ip1 << std::endl;
	std::cout << "r=" << r << std::endl;
	
	return 0;
}