#include <iostream>
using namespace std;
 
int main()
	{
	int itemP, itemQ;
	double cost ;
	cout << "Enter item price: ";
	cin >> itemP;
	cout << "Enter item quantity: ";
	cin >> itemQ;
	cost = itemP * itemQ;
	if ( ( itemP >= 100 ) && ( itemQ >= 2 ) )
		cost = cost - (cost * 0.05);	
	cout << "Total cost= " << cost << endl;
	if ( cost > 1000 )
		cout << "You can get additional discount!" << endl;
	else
		cout << "Total cost= " << cost+10 << endl;
	}

