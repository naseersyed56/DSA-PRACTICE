#include<iostream>
using namespace std;

//switch case


int main() {

	char k;
	cout << "enter the signal\n ";
	cin >> k;

	switch (tolower(k)) {
	case 'r':
		cout << "stop \n";
		break;
	case'y':
		cout << " get ready \n";
		break;
	case 'g' :
		cout << " go now \n";
			break;
	default :
		cout << "Invalid signal \n";
		}
	
	return 0;

}