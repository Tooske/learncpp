#include<iostream>


/*
---------------------------------------------------------------------------------------------------------------------
 What are literals ?
 A literal (also known as a literal constant) is a fixed value that has been inserted directly into the source code. 
 Value 5 is always 5. This is my literals are called constants.
---------------------------------------------------------------------------------------------------------------------
*/


int main10()
{
	std::cout << 5 << "\n"; // prints the value of a literal

	int x{ 5 };				// initializing variable "x" with value "5"
	std::cout << x << "\n"; // prints the value of a variable
	return 0;
}

int main11()
{
	std::cout << 1 + 2 << "\n";

	return 0;
}


int main12()
{
	int x{}, y{}; // value initialization

	std::cout << "enter 2 number's and add them together (seperate them by space) : "; // display's a question in the console

	std::cin >> x >> y; // entered value's get stored in var "x" and "y"

	std::cout << "your final result is =  " << x + y; // add's the numbers together and display's the endresult in the console

	return 0;
}

					//What's the output gonna look like ?
int main13()
{
	std::cout << 2 + 3 << "\n";

	int x{ 6 };
	int y{ x - 2 };
	std::cout << y << "\n";

	int z{ };
	z = x;
	std::cout << z - x << "\n";					 

	return 0;
}

/*
------------------------------------Explanation-----------------------------------------------------------
line 46 -- throws 5 because 2 + 3 = 5

line 48 -- x has a stored value of 6 (direct list initialization)

line 49 -- y becomes 4 because x(6) - 2 = 4

line 50 -- print's y(4) 

line 52 -- z is empty value initialization

line 53 -- z is now == x so 6

line 54 -- z(6) - x(6) output = 0
----------------------------------------------------------------------------------------------------------
*/