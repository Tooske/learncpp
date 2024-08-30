#include <iostream> // <iostream> allows us to read and write text from and to the console


using namespace std;


	/* This
	is
	a
	multiline
	comment */

int main1() /* tells the compiler we're going to define a function whose name (identifier) is main.
			  Every CPP programm must have a main function or it will fail to link*/
{

	std::cout << "This gets" << endl					// << endl does the same as \n
		<< "printed out \n"
		<< "in multiple lines" << endl;

	return 0; /* sends a value back to the operation system to tell it if it was successfull or not 
			     "0" means the programm was successfull */
}