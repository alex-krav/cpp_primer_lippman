#include <iostream>

int main()
{
	double dval = 3.14;
	int &ri = dval; //must be const ref: can't make int operations on double
	
	std::cout << "dval=" << dval << std::endl;
	std::cout << "ri=" << ri << std::endl;
	
	return 0;
}