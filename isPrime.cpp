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
