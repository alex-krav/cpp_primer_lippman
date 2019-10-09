#include <iostream>

int main()
{
	double obj = 3.14, *pd = &obj;
	void *pv = &obj;
	
	//std::cout << "*pv=" << *pv << std::endl;
	
	pv = pd;
	
	//std::cout << "*pv=" << *pv << std::endl;
	
	return 0;
}