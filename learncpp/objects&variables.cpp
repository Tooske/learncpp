#include <iostream>

int mainb()
{
	// defines a variable named x, type (int)
	int x;

	// define multiple variables
	int a;
	int b;

	// works the same as above
	int c, d;

	return 0;
}
	

int mainc()
{
	int width; // we define a integer variable named "width

	width = 5; // we assign the value "5" to our variable

	std::cout << width; // prints out "5"

	width = 7; // changes our value "5" to "7"

	std::cout << width; // prints out "7"
	return 0;
}

	// console should now print out "57"


	/* downside of assignment is that it requires at least two statements :
	one to define the variable, and one to assign the value.
	
	Here comes Initialization into place, two steps can be combined*/
	
	//int a;		// no initializer (default initialization)
	//int b = 5;	// initializer after equals sign (copy initialization)
	//int c(6);		// initializer in parenthesis (direct initialization)
	
	
	//int width{ 5 };		// direct list initialization of value "5" into variable "width"
	//int height = { 6 };	// copy list initialization of value "6" into variable "height"
	//int depth{};			// value initialization 


int maind()
{
	//int x{ 0 };     // explicit initialization to value 0
	//std::cout << x; // we're using that zero value
	
	int x{ };         // value initialization

					  /* "cin" is an object class of iostream, it allows us to send data to the console, 
					  it modifies the I/O stream via insertion (<<) and extraction (>>) operators */

	std::cin >> x;    // we're immediately replacing that value

	std::cout << x;

	return 0;
}