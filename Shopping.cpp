#include <iostream>
#include <conio.h>

using namespace std;

void main () {
	float primaryValue, discount;
	cout << "Please enter your purchase value: \n";
	cin >> primaryValue;
	if (primaryValue >= 1000) {
		discount = 0.05;
		cout << "You have 5% discount.\n";
		cout << "You have to pay " << primaryValue - primaryValue * discount << endl;
	}
	else if (primaryValue < 1000 && primaryValue >= 500) {
		discount = 0.03;
		cout << "You have 3% discount (" << primaryValue * discount << ")" << endl;
		cout << "You have to pay " << primaryValue - primaryValue * discount << endl;
	}
	cout << "Thank you for your purchase! Come back again!\n";
	_getch();
}