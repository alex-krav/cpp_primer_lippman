#include <iostream>

std::string global_str;
int global_int;
double global_double;

int main()
{
	int local_int;
	double local_double;
	std::string local_str;
	
	std::cout << "global_str=" << global_str << std::endl;
	std::cout << "global_int=" << global_int << std::endl;
	std::cout << "global_double=" << global_double << std::endl;
	
	std::cout << "local_str=" << local_str << std::endl;
	std::cout << "local_int=" << local_int << std::endl;
	std::cout << "local_double=" << local_double << std::endl;
	
	return 0;
}