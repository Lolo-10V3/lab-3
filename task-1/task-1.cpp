#include <iostream>

using namespace std;    

int main(){

	double degree;
	char measurement;
	cout << "Enter the temperature degree: ";
	cin >> degree;
	cout << "Enter the measurement (C for Celsius, F for Fahrenheit): ";
	cin >> measurement;
	if (measurement == 'C') {
		cout << degree << " degrees Celsius is " << (degree * 9 / 5 + 32) << " degrees Fahrenheit." << endl;
	}
	else if (measurement == 'F') {
		cout << degree << " degrees Fahrenheit is " << ((degree - 32) * 5 / 9) << " degrees Celsius." << endl;
	}
	else {
		cout << "Invalid measurement. Please enter C or F." << endl;
	}



}
