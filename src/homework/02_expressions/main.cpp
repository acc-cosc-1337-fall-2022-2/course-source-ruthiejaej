//write include statements
#include "hwexpressions.h"
#include<iostream>

//write namespace using statement for cout
using std::cout;
using std::cin;


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
double meal_amount;
double tip_rate;
double tip_amount;
double SalesTaxAmount;
double meal_total;
cout<<"How much did the meal cost?/n";
cin>>meal_amount;
SalesTaxAmount = get_sales_tax_amount(meal_amount);
cout<<"How much is the tip read?/n";
cin>>tip_rate;
tip_amount = get_tip_amount(meal_amount,tip_rate);
meal_total = tip_amount + tax_rate + meal_amount;
cout<<"Meal Amount:/n"
cout<<"Sales Tax:/n"
cout<<"Tip Amount:/n"
cout<<"Total:" 
cout<< ›meal_total
return 0;
}
