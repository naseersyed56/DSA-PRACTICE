#include<iostream>
using namespace std;

void  crossed_sqr() {

	int rows;
	cout << "enter rows \n";
	cin >> rows;

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < rows - i; j++) {
			cout << "_";
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int q = rows-1; q > 0; q--) {
		for (int f = 0; f < rows - q+1; f++) {
			cout << "_";
		}
		for (int r = 0; r < 2 * q - 1; r++) {
			cout << "*";
		}
		cout << endl;
	}
}
int main() {

	crossed_sqr();
}