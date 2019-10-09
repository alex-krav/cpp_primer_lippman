#include <iostream>
#include "Sales_item.h"

int main() 
{
	Sales_item prev, current;
	if (std::cin >> prev) {
		int times = 1;
		while (std::cin >> current) {
			if (prev.isbn() == current.isbn()) {
				prev += current;
				times++;
			} else {
				std::cout << prev << " (" << times << " transactions)" << std::endl;
				prev = current;
				times = 1;
			}
		}
		std::cout << prev << " (" << times << " transactions)" << std::endl;
		return 0;
	} else {
		std::cerr << "No transactinos found" << std::endl;
		return -1;
	}
}