#include <iostream>

// Question #5

// Write a complete program that reads an integer from the user,
// doubles it using the doubleNumber() function you wrote in the previous quiz question,
// and then prints the doubled value out to the console.

int doubleNumber(int x)
{
	return x * 2;
}


int main()
{
	int x{};
	std::cout << "Enter a random number: ";
	std::cin >> x;
	std::cout << doubleNumber(x) << "\n";
	return 0;
}



//int doubleNumber(int x)
//{
//    return 2 * x;
//}
//
//int main()
//{
//    int x{};
//    std::cin >> x;
//    std::cout << doubleNumber(x) << '\n';
//
//    return 0;
//}