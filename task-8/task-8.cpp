#include <iostream>
using namespace std;

int main()
{
	int id , age , seatsnum , total ;
	char classType ;

	cout << "Enter ID: ";
	cin >> id;
	cout << "Enter age: ";
	cin >> age;
	cout << "Enter class type (A, B, C): ";
	cin >> classType;
	cout << "Enter the number of seats you want to book: ";
	cin >> seatsnum;
	if (age >= 18) {
		if (classType == 'A' || classType == 'a') {
			total = seatsnum * 100;
		}
		else if (classType == 'B' || classType == 'b') {
			total = seatsnum * 75;
		}
		else if (classType == 'C' || classType == 'c') {
			total = seatsnum * 50;
		}
		else {
			cout << "Invalid class type." << endl;
			return 1;
		}
	}
	else {
		cout << "You are not eligible to book tickets." << endl;
	}
	return 0 ;

}
