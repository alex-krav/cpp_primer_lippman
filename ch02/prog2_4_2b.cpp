#include <iostream>

int main()
{
	int i;
	int errNumb = 0;
	int *const curErr = &errNumb;
	
	*curErr = 1; // ok
	//curErr = &i;
	
	double j;
	const double pi = 3.14159;
	const double *const pip = &pi;
	
	//*pip = 1;
	//pip = &j;
	
	return 0;
}