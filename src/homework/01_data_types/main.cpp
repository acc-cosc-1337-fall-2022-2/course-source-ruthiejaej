//write include statements
#include <iostream>
#include "data_types.h"

//write namespace using statement for cout
using std::cout;
using std::cin;
/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/


int main ()

{
	int num = 0;
	cout<<"Pick a number, any number: ";
	cin>>num;

	int result = multiply_numbers(num);
	cout<<"The answer is: "<<result<<"\n";

	int num1 = 4;
	result = multiply_numbers(num1);
	cout<<"The second answer is: "<<result<<"\n";

	return 0;
}
