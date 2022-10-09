/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
#include<iostream>
#include<string>
using std::cout;
using std::cin;

int main() 
{
int choice = 0;
int choice{};
cout <<"Main Menu: \n";
cout <<	"1. Get GC Content \n";
cout << "2. Get DNA Complement \n";
cout << "3. Exit \n";
cin >> choice;
if (choice == 3)
{
    exit(0);
}

do
{
cout << "What would you like to do:";
cin >> choice;

}while (choice >= 1 || choice <= 3);
return 0; 
}