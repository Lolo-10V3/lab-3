// task-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int v1 , v2 ;
	char op ;
	cout << "Enter first value: ";
	cin >> v1;	
	cout << "Enter second value: ";
	cin >> v2;
	cout << "Enter operator (+, -, *, /): ";
	cin >> op;
	switch (op) {
	case '+':
		cout << v1 << " + " << v2 << " = " << v1 + v2 << endl;
		break;
	case '-':
		cout << v1 << " - " << v2 << " = " << v1 - v2 << endl;
		break;
	case '*':
		cout << v1 << " * " << v2 << " = " << v1 * v2 << endl;
		break;
	case '/':
		if (v2 != 0) {
			cout << v1 << " / " << v2 << " = " << v1 / v2 << endl;
		} else {
			cout << "Error: Division by zero is not allowed." << endl;
		}
		break;
	default:
		cout << "Invalid operator. Please enter +, -, *, or /." << endl;
	}

}
