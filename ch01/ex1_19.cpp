#include <iostream>

int main() 
{
	int sum = 0, first, second;
	
	if (std::cin >> first) {
	  if (std::cin >> second) { 
            if (first < second) {
		int i = first;    
		while (i <= second) {
			sum += i;
			i++;
		}
                std::cout << "Sum of range " << first << " to " << second << " equals to " << sum << std::endl;
	    }
	   }
	}

	return 0;
}
