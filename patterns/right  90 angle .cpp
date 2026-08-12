#include<iostream>
using namespace std;

void left_triangle() {
 
	int rows;
	cout << "enter rows \n";
	cin >> rows;

	for (int i = 0; i <= rows; i++) {
		for (int j = 0; j < rows-i; j++) {
			cout << "_";
		}
		for (int k = 0; k <= i; k++) {
			cout << "*";
		}
		cout << endl;
	}
	return;

}

int main() {

	left_triangle();

}