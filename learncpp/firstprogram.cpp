#include <iostream>

int main15()
{
	std::cout << "Enter a integer: ";							// ask's the user for an integer

	int num{ };													// value initialization
	std::cin >> num;											// write's the user into into our variable "num"

	std::cout << "your number *2 is = " << num * 2 << "\n";		// print's the output * 2 + starts the next output on a new line "\n"
	std::cout << "your number *3 is = " << num * 3;				// print's the output * 3

	return 0;
}
