#include <iostream>


// Introduction to functions /read chapter 2.1 for more informations


/*
void doPrint()
{
	std::cout << "in doPrint()\n"; // doPrint() is the called function in this scenario
}


// We define the main function

int main()
{
	std::cout << "starting main()\n";
	doPrint();							// we interrupt the main() function by making a call to doPrint().	main() is the caller
	std::cout << "ending main()\n";

	return 0;
}
*/

// ---------------------------------- Just playing around making sure i understood ----------------


void doPrint()									  // funtion doPrint()
{
	std::cout << "In doPrint()\n";				  // print's to the console
	std::cout << "enter a number : ";			  // print's to the console
	int x{};									  // value initialization
	std::cin >> x;								  // userinput get's writte to var x
	std::cout << x + 1 << "\n";					  // var x + 1 printed to console
}


void doB()										  // function doB()
{
	std::cout << "In doB()\n";					  // print's to the console

	doPrint();									  // call's doPrint
}


void doA()										  // function doA()
{
	std::cout << "Starting doA()\n";			  // print's to the console

	doB();										  // call's doB()

	std::cout << "Ending doA()\n";				  // print's to the console
}


int main16()										  // main function
{
	std::cout << "Starting main()\n";			  // print's to the console

	doA();										  // call's doA()

	std::cout << "Ending main()\n";				  // print's to the console

	return 0;
}
// ------------------------------------------------------------------------------------------------

// -----------------------------------Nested functions are not supported---------------------------
/*
int main()
{
	void foo() Illegal: this function is nested inside function main()
	{
		std::cout << "foo!\n";
	}

	foo(); function call to foo()
	return 0;
}
*/


// -----------------------------------Proper way---------------------------------------------------


/*
void foo() // no longer inside of main()
{
	std::cout << "foo!\n";
}

int main()
{
	foo();
	return 0;
}
*/


// ------------------------------------------------------------------------------------------------