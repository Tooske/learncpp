#include <iostream>


/*
int getValueFromUser1()												// define function
{
	std::cout << "enter a integer: ";								// ask the user for an integer

	int input{};													// storage for our integer

	std::cin >> input;												// write our integer to input

	return input;													// return the input to caller
}

int main()															// define main
{
	int num{ getValueFromUser1() };								    // stores the returned value from getValueFromUser1

	std::cout << num << " doubled is: " << num * 2 << "\n";			// self explaining

	return 0;
}
*/

// -------------------------------------------------------------------------------------------------------------------------------------------

/*
int getValueFromUser1()
{
	std::cout << "Enter an integer: ";

	int input{};

	std::cin >> input;

	return input;
}

void printDouble()													// output as own function
{
	int num{};
	std::cout << num << " doubled is: " << num * 2 << '\n';
}

int main()
{
	int num{ getValueFromUser1() };

	printDouble();

	return 0;
}
*/

// ------------------------------------------ Function parameters and arguments --------------------------------------------------------------


// This function takes no parameters
// It doesn't rely on the caller for anything

/*
void doPrint2()
{
	std::cout << "In doPrint()\n";
}

// This function takes one integer parameter named x
// The caller will supply the value of x

void printValue2(int x)
{
	std::cout << x << "\n";
}

// This function has two integer parameters, one x, the other y
// The caller will supply the value of both x and y

int add(int x, int y)
{
	return x + y;
}
*/

// This function has two integer parameters, one named x, and one named y
// The values of x and y are passed in by the caller


//void printValues(int x, int y)
//{
//	std::cout << x << "\n";
//	std::cout << y << "\n";
//
//}
//
//int main()
//{
//	printValues(6, 7); 												// This function call has two arguments, 6 and 7
//
//	return 0;
//}

// When calling the function printValues with the arguments 6 and 7, printValues parameter x is initialized with value 6 and y with 7


// -------------------------------------------- Breakdown with my own words?! ---------------------
/*
* Looking at our main function, the variable num is first initialized when the user entered an integer in function getValueFromUser2
* the returned input gets stored in num.
* now printDouble gets called with the argument num, the integer of num now get's copied into the value parameter of printDouble
* 
* What the heck, this took way longer 
*/


/*
int getValueFromUser2()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}

void printDouble(int value) // This function now has an integer parameter
{
	std::cout << value << " doubled is: " << value * 2 << '\n';
}

int main()
{
	int num{ getValueFromUser2() };

	printDouble(num);

	return 0;
}
*/
// --------------------------------------------------------------------------------------------------


// ---------------------------------------------- The cutdown version -------------------------------

// Now instead of storing the return value of getValueFromUser2 in "num" like in example above this
// we now simply return the value of getValueFromUser2 as an argument to function printDouble

int getValueFromUser2()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}

void printDouble(int value)
{
	std::cout << value << " doubled is: " << value * 2 << '\n';
}

int main18()
{
	printDouble(getValueFromUser2());

	return 0;
}