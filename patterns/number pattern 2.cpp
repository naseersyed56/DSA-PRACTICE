#include<iostream>
using namespace std;

int main() {
	int q, l;
	cout << "enter no .of rows ";
	cin >> q;
	cout << "enter no of columns";
	cin >> l;
	for (int i = 1; i <= q; i++) {
		for (int j = 1; j <= i; j++) {

			cout << j;
		}
		cout << endl;
	}
}