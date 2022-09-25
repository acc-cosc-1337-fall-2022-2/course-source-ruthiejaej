//write include statements
#include "decisions.h"
#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::cout;

int main()




{	
	int main_menu
	std::cin>>Main_menu;
	if(grade>=00&&grade<=100)
	{
		the_letter_grade=get_letter_grade_using_if(grade);
		std::cout<<"Letter Grade is: "<<the_letter_grade<<"\n";
	}
	
	else
	{
		std::cout<<"You entered a number that is out of range"<<std::endl;

		return 0;
	}