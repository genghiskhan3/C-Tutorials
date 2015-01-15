// a program to determine if a number is a power of two

#include <iostream>

int main(){
	int n;
	std::cin >> n;
	bool start = true;
	if (n % 2 != 0 || n < 2) start = false;

	if (start){
		while (n > 2){
			n = n / 2;
			if (n % 2 != 0) break;
		}
	}

	if(start && n == 2) std::cout << "It is a power of two\n";
	else std:: cout << "It is not a power of two\n";
	return 0;
}
