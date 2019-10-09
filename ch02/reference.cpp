#include <iostream>

int main()
{
	int i = 1;
	int j = 2;
	int &ref = i; // must be initialized
	
	//&ref = j; // can't re-assign reference 
	ref = 3;

	std::cout << "i=" << i << std::endl; // 3
	std::cout << "j=" << j << std::endl; // 2
	
	return 0;
}