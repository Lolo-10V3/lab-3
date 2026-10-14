#include <iostream>
using namespace std;

int main()
{
	int grade1, grade2, grade3, average;
	cout << "Enter the first grade: ";
	cin >> grade1;
	cout << "Enter the second grade: ";
	cin >> grade2;
	cout << "Enter the third grade: ";
	cin >> grade3;
	average = (grade1 + grade2 + grade3) / 3;
	if ( ( average >= 90 ) && ( average <= 100 ) )
		cout << "grade:A "<< endl;
	else if ( ( average >= 70 ) && ( average < 90 ) )
		cout << "grade:B "<< endl;
	else if ( ( average >= 50 ) && ( average < 70 ) )
		cout << "grade:C "<< endl;
	else if ( average > 50 )
		cout << "grade:F "<< endl;
	else
		cout << "invalid grade"<< endl;
	return 0;
}
