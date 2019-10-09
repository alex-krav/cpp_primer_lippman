#include <iostream>

int main()
{
	int i, *const cp1 = &i;
	int *p1, *const p2 = &i;
	const int ic = 0, &r = ic;
	const int *const p3 = &i;
	const int *p = &i;
	
	/**************************/
	
	i = ic; // ok
	/*
	p1 = p3; // not 
	p1 = &ic; // not 
	p3 = &ic; // not 
	p2 = p1; // not 
	ic = *p3; // not 
	*/
	
	return 0;
}