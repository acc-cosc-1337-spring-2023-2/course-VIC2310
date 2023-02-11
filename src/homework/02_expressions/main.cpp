﻿//write include statements
#include<iostream>
#include "hwexpressions.h"

using std::cout;
using std::cin;
//write namespace using statement for cout
/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;
	cout << "Please enter meal amount: ";
  	cin >> meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);
	cout << "Please enter tip rate as a decimal point: ";
	cin >> tip_rate;
	tip_amount = get_tip_amount(meal_amount, tip_rate);
	total = tip_amount + tax_amount + meal_amount;
	cout << "Meal Amount: " << meal_amount << "\n";
	cout << "Sales Tax: " << tax_amount << "\n";
	cout << "Tip Amount: " << tip_amount << "\n";
	cout << "Total" << total;

	return 0;
}
