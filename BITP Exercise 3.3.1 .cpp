// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	float price = 9.90;
	int quantity;
	cout << "Please enter your purchase quantity> " << flush;
	cin >> quantity;
	const int DISC = 10;
	float totalprice;
	totalprice = (price*quantity)*(100 - DISC) / 100.00;
	cout << "The total price is " << totalprice << endl;


    return 0;
}

