// Smith_ProgrammingBasicsProgram1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program takes the price of an item, applies a mark-up percentage, adds sales tax and then spits out a final price

#include <iostream>
using namespace std;


int main()
{
    float basePrice, markup, sellPrice, tax, finalPrice;

    cout << "What is the base price of the item? ";
    cin >> basePrice;

    cout << "What is the markup as a decimal? ";
    cin >> markup;
    markup = markup + 1;

    cout << "What is the sales tax as a decimal? f";
    cin >> tax;
    tax = tax + 1;


    sellPrice = basePrice * markup;
    finalPrice = sellPrice * tax;
    markup = markup * 100 - 100;
    tax = tax * 100 - 100;
    
    cout << fixed << showpoint;
    cout.precision(2);
    cout << "Original Price: $" << basePrice << endl << "Markup Percentage: " << markup << "%" << endl << "Selling Price: $" << sellPrice << endl << "Sales Tax: " << tax << "%" << endl << "Final Price: $" << finalPrice;

    return 0;
}
