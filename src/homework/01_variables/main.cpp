//write include statements
#include <iostream>
#include "variables.h"
//write namespace using statement for cout
using std::cout; using std::string;


int main()
{
	int num;
	std::cin >> num;
	int result = multiply_numbers(num);
	cout << result;
	cout << "\n";

	int num1 = 4;
	result = multiply_numbers(num1);
	cout << result;

	return 0;
}
