#include <iostream>



/*
------------------------------------------------------------------------------------------------------------------------------
			int b{2 + 3};  
			
			breaking down this statement into syntax,
			
			2 + 3 is an expression that has no semicolon -- the semicolon at the end of the statement containing the expression
			
			it would look something like "type - identifier - { expression };  
------------------------------------------------------------------------------------------------------------------------------
*/
int five()
{
	return 5;
}

int mainm()
{

	int	a{ 2 };				 // initialize variable a with literal value 2

	int	b{ 2 + 3 };			 // initialize variable b with computed 5

	int	c{ (2 * 3) + 4 };	 // initialize variable c with value 10

	int	d{ b };				 // initialize variable d with value 5

	int	e{ five() };		 // initialize variable e with function return value 5


	std::cout << a << b << c << d << e;

	return 0;
}

/*--------------------------------------------------------------------------------------------------------------
 so
 
   int x;	  Does not contain an expression (this is just a defined variable)
   
   int x = 5; This statement contains an expression 
   
   x = 5;	  This is a expression statement. x = 5 is a call to operator = with two operands ("x" and "5")
			  The semicolon makes it an expression statement. 

--------------------------------------------------------------------------------------------------------------
*/