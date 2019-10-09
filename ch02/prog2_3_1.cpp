#include <iostream>

int main()
{
	int ival = 1024;
	int &refVal = ival;
	// int &refVal2;
	
	refVal = 2;
	int ii = refVal;
	std::cout << "ival=" << ival << std::endl;
	std::cout << "ii=" << ii << std::endl;
	
	/*
	int &refVal4 = 10;
	double dval = 3.14;
	int &refVal5 = dval;
	*/
	
	return 0;
}