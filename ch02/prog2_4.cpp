#include <iostream>

int get_size() { return 5; }

int main()
{
	const int bufSize = 512;
	//bufSize = 512;
	
	const int i = get_size();
	const int j = 42;
	//const int k;
	
	return 0;
}

