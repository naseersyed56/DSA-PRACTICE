
#include<iostream>
using namespace std;
int main() {
	int f;
	cout << "enter the no of rows";
	cin >> f;
	
	for (int i = 1; i <= f; i++) {
		for (int j = 1; j <= f - i; j++) {
			cout << " ";
		}
			for (int k = 1; k <= i; k++) {

				cout << k;
			}
		
		cout << endl;
	}
	return 0;
};
