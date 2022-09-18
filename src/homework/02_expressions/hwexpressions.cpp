#include "expressions.h"
#include "hwexpressions.h"
//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here
double ›(double meal_amount)
{
double tax_rate = 0.825;
double meal_total = tax_rate * meal_amount;
return meal_total;
}
double get_tip_amount(double meal_amount, double tip_rate)
{
double tip_total = meal_amount * tip_rate;
return tip_total;
}

