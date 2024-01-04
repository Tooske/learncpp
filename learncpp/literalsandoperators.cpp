#include<iostream>


/* What are literals ?
 A literal (also known as a literal constant) is a fixed value that has been inserted directly into the source code. 
 Value 5 is always 5. This is my literals are called constants. */


int mainj()
{
	std::cout << 5 << "\n"; // prints the value of a literal

	int x{ 5 };				// initializing variable "x" with value "5"
	std::cout << x << "\n"; // prints the value of a variable
	return 0;
}

int maink()
{
	std::cout << 1 + 2 << "\n";

	return 0;
}


int mainl()
{
	int x{}, y{}; // value initialization

	std::cout << "enter 2 number's and add them together (seperate them by space) : "; // display's a question in the console

	std::cin >> x >> y; // entered value's get stored in var "x" and "y"

	std::cout << "your final result is =  " << x + y; // add's the numbers together and display's the endresult in the console

	return 0;
}