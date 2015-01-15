// code to determine if a number is prime or not and it also lists out all of its divisors in the process

#include <iostream>

int main(){
	int n;
	std::cin >> n;
	int k = 0;

	for (int i = 1; i <= n; i++){
		if (n % i == 0){
			std::cout << i << " , "; k++;
		}
	}
	std::cout << "\n";
	if (k == 2) std:: cout << "Prime!";
	else std:: cout << "Not a prime";
	return 0;
}
