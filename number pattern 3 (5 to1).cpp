#include<iostream>
using namespace std;
int main() {

	int r, y, u;
	cout << "enter no of rows";
		cin >> r;
	cout << "enter no of colums";
	cin >> y;
	for (int i = r; i >= 0; i--) {
		for (int j = 1; j <= i; j++) {
			cout << j;

		}
		cout << endl;
	}

}