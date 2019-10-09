#include <iostream>
#include "Sales_item.h"

int main() 
{
    Sales_item sum, val;
    if (std::cin >> sum) {
        while (std::cin >> val) {
	    sum += val;	
	}
	std::cout << sum << std::endl;
    }
    else {     
        std::cout << "no transactions made" << std::endl;
    }
    return 0;
}
