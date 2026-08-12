#include<iostream>
using namespace std;

void reverse_eql_triangle() {

	int rows;
	cout << "enter no of rows \n";
	cin >> rows;
	for (int i = rows; i > 0; i--) {
		for (int j = 0; j <= rows-i; j++) {
			cout << " ";
		}
		for (int h= 0; h<2*i-1 ; h++) {
			cout << "*";
		}
		cout << endl;
	}
}
int main() {

	reverse_eql_triangle();
}