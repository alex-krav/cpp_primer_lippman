#include <iostream>

int main() 
{
	std::cout << 'a' << std::endl;
	std::cout << "Hello World!"	<< std::endl;
	std::cout << "Hello World! " 
	"My name is Alex" << std::endl;
	
	std::cout << '\n';
	std::cout << "\tHi!\n";
	std::cout << "Hi \x4dO\115!\n";
	std::cout << '\115' << '\n';
	
	std::cout << L'a' << '\n';
	std::cout << u8"hi!" << '\n';
	std::cout << 42ULL << '\n';
	std::cout << 1E-3F << '\n';
	std::cout << 3.14159L << '\n';
	
	return 0;
}