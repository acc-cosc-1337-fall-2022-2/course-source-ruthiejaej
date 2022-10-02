//write include statements
#include "dna.h"
#include<iostream>
#include<string>

using std::cout;
using std::cin;
//write using statements


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 

   { std::cout << "Main Menu\n"
        << "-------------------\n"
        << "1. Factoral\n"
        << "2. Greatest Common Divisor\n"
        << "3. Exit\n";
        

    
    int choice;

    do
    
        choice = true;
    while    
	(std::cout << "Enter choice: ");
        std::cin >> choice;
	return 0;
}