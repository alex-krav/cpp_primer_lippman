#include <iostream>

int main()
{
	int i2;
	int i = -1, &r = i ; //a 
	int *const p2 = &i2
	; //b
	const int ii = -1, &rr = ii; //c 
	const int *const p3 = &i2; //d 
	const int *p1 = &i2; //e 
	const int &r2 = i2; //f 
	const int i3 = i, &rrr = i3; //g 
	
	return 0;
}