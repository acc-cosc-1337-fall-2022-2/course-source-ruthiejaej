//add include statements
#include "dna.h"
#include<iostream>
#include<string>

using std::cout;
using std::cin;
//add function(s) code here

//int factoral(int num)
//{
  //  int res = 1, i;
    //for (i = 2; i <= num; i++)
    //res *=i;
    //return res; 
//}
//int main()
//{
  //  int num = 5;
    //cout << "Factorial of " << num << " is "<< factoral(num);
    //return sum;
//}


int main()

{
int num;
cout<<"Enter a positive integer:" ;
cin>>num;
cout<< "factoral of" << num << "=" << factoral(num);

return 0;
}

int factoral(int num) 
{
    if(num > 1)
    return num * factoral(num - 1);
    else 
    return 1;
}
int gcd2()
{
int num1, num2, gcd;
cout << "\n\n Find the Greatest Common Divisor of two numbers:\n";
cout << "__________________________________________________\n";
cout << "Input first number:";
cin >> num1;
cout << "Input second number:";
cin >> num2;
for (int i = 1; i <= num1 && i <= num2; i++)
{
  if (num1 % i == 0 && num2 % i == 0)
  {
    gcd = i;
  }
}
cout << "The Greatest Common Divisor is: " << gcd;
return 0;
}