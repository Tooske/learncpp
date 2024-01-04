#include<iostream>


/* What are literals ?
 A literal (also known as a literal constant) is a fixed value that has been inserted directly into the source code. 
 Value 5 is always 5. This is my literals are called constants. */


int main()
{
	std::cout << 5 << "\n"; // prints the value of a literal

	int x{ 5 };				// initializing variable "x" with value "5"
	std::cout << x << "\n"; // prints the value of a variable
	return 0;
}