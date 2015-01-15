// a program to determine if a string is a palindrome or not

#include <iostream>

int main(){
	int n;
	std::cin >> n;
	int rev = 0;
	int orig = n;

	while (n > 0){
		int dig = n % 10;
		rev = rev * 10 + dig;
		n = n / 10;
	}
	
	std::cout << orig << " ," << rev << "\n";

	if (orig == rev) std::cout << "It is a palindrome";
	else std::cout << "It is not a palindrome";

	return 0;
}
