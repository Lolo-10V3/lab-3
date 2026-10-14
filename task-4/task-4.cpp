#include <iostream>
using namespace std;

int main()
{
	int age, weight, length, calories;
	char gender;
	cout << "Enter your age: ";
	cin >> age;
	cout << "Enter your weight: ";
	cin >> weight;
	cout << "Enter your length: ";
	cin >> length;
	cout << "Enter your gender (M/m for male, F/f for female): ";
	cin >> gender;
	if ((gender == 'M' || gender == 'm')) {
		calories = (10 * weight) + (6.25 * length) - (5 * age) + 5;
		cout << "your body needs " << calories << " calories." << endl;
	}
	else if ((gender == 'F' || gender == 'f')) {
		calories = (10 * weight) + (6.25 * length) - (5 * age) - 161;
		cout << "your body needs " << calories << " calories." << endl;
	}
	else {
		cout << "Invalid gender input." << endl;
	}
	return 0;
}

