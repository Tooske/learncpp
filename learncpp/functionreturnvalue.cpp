#include <iostream>

/*
int returnfive()
{
	return 5;
}

int main()
{
	std::cout << returnfive() << "\n";
	std::cout << returnfive() + 2 << "\n";

	returnfive();

	return 0;
}
*/

/*
int getValueFromUser()												// this function now return an integer value
{
	std::cout << "Enter a integer: ";
	int input{};
	std::cin >> input;
	
	return input;													// return's the value the user entered back to the caller
}

int main()
{
	int num{getValueFromUser()};									// initialize num with the return value of getValueFromUser()

	std::cout << num << " doubled is: " << num * 2 << "\n";

	return 0;
}
*/


int getValueFromUser()
{
	std::cout << "Enter a integer: ";
	int input{};
	std::cin >> input;

	return input;
}

int main17()
{
	int x{ getValueFromUser() };									// first call to getValueFromUser()
	int y{ getValueFromUser() };									// second call to getValueFromUser()

	std::cout << x << " + " << y << " = " << x + y << "\n";			// input x + input y = sum

	return 0;
}



//------------------------------ Void functions ------------------------------

																	// Void mean the function does not return a value back to the caller
																	// Void functions dont need a return statement
//void printHi()
//{
//	std::cout << "Hi" << "\n";
//
////	return;															// redundant, the return will happen at the end of the function anyways
//}
//
//int main()
//{
//	printHi();
//
//	return 0;
//}