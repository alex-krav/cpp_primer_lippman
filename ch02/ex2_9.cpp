#include <iostream>

int main()
{
	// a
	int input_value;
	std::cin >> input_value;
	std::cout << "input_value=" << input_value << std::endl;
	
	// b
	int i1 = (3.14);
	std::cout << "i1=" << i1 << std::endl;
	
	// c 
	double wage = 9999.99, salary = wage;
	std::cout << "salary=" << salary << std::endl;
	std::cout << "wage=" << wage << std::endl;
	
	// d 
	int i2 = 3.14;
	std::cout << "i2=" << i2 << std::endl;
	
	return 0;
}