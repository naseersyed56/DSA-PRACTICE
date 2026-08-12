#include<iostream>
using namespace std;


void starptr_sqr() {

	int side;
	cout << "enter leng of side \n";
	cin >> side;

	for (int i = 0; i < side; i++) {
		for (int j = 0; j < side; j++) {
			if (i == 0 || j == 0 ||
				j == side - 1 || i== side - 1) {
				cout << "*" ;
			}
			else
				cout << " ";
		}
		cout << endl;
	}
}
int main() {

	starptr_sqr();
}