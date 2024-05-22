// Created by Richard Goodman (contact me at richard@compiled.htb)

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// Variables
	string operation;
	double number1, number2;

	// Input
	cout << "Enter first number: ";
	cin >> number1;
	cout << "Enter operation (+, -, *, /): ";
	cin >> operation;
	cout << "Enter second number: ";
	cin >> number2;

	// if else statement checking entered operation
	if (operation == "+") {
		cout << number1 + number2;
	}
	else if (operation == "-") {
		cout << number1 - number2;
	}
	else if (operation == "*") {
		cout << number1 * number2;
	}
	else if (operation == "/") {
		cout << number1 / number2;
	}
	else {
		cout << "Not recognized either operation or number:(";
	}

	return 0;
}