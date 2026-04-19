#include<iostream>
using namespace std;

int main() {

	int q, w;
	cout << "enter the no of rows";
	cin >> q;
	cout << "enter the no of colums";
	cin >> w;

	for (int i = 1; i <=q; i++) {
		for (int j = 01; j <=w; j++) {

			cout << " *";
		}
		cout << endl;
	}

	return 0;
}