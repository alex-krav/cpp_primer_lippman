#include <iostream>

int main()
{
	int unit1 = 0;
	int unit2 = {0};
	int unit3{0};
	int unit4(0);
	
	long double ld = 3.1415926536;
	//int a{ld}, b = {ld};
	int c(ld), d = ld;
	
	std::cout << "unit1=" << unit1 << std::endl;
	std::cout << "unit2=" << unit2 << std::endl;
	std::cout << "unit3=" << unit3 << std::endl;
	std::cout << "unit4=" << unit4 << std::endl;
	
	std::cout << "c=" << c << std::endl;
	std::cout << "d=" << d << std::endl;
	
	return 0;
}