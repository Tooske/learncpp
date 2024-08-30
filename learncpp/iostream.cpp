#include <iostream>

int main5()
{
	int x{ 5 };		// variable x, initialized with value "5"
	std::cout << x; // prints out the value of x "5" to the console
	return 0;

}


int main6()
{
	int x{ 5 };
	std::cout << "x is equal to : " << x; // prints both the text and also the value of the variable in the same statement
	std::cout << "\nhello " << "world";   // prints hello world on another line (\n)
	return 0;

}

int main7()
{
	std::cout << "Enter a number: "; // ask the user for a number

	int x{};		// define variable x to hold user imput (value initialize it)
	std::cin >> x;  // user enters his number and it gets stored in variable x

	std::cout << "Your number is " << x << '\n';
	return 0;
}

int main8()
{
	std::cout << "enter two numbers seperated by a space: ";

	int x{ 3 };					// define variable x to hold user input
	int y{ 2 };
	int z{ 4 };					// do the same with y
	std::cin >> x >> y >> z;	// wait for the input to be stored in var x and y

	std::cout << "You entered " << x << " and " << y << " and " << z;
	return 0;

}


int main9()
{


	return 0;

}
