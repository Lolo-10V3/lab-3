#include <iostream>
using namespace std;

int main()
{
	int x ;

	cout << "Enter a number: ";
	cin >> x;

	if ( x == 0 ) {
		cout << x << " is neither even nor odd." << endl;
	}
	else if ( x % 2 == 0 ) {
		cout << x << " is even." << endl;
	}
	else {
		cout << x << " is odd." << endl;
	}

}
