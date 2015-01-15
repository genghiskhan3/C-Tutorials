// a program to print the fib sequence untill a given number

#include <iostream>

int main(){
	int n;
	std::cin >> n;

	int first = 0;
	int second = 1;
	std::cout << "1 ,";
	while(true){
		int add = first + second;
		if (add > n) break;
		std::cout << add << " ,";
		first = second;
		second = add;
	}

	return 0;
}
