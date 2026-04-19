#include<iostream>
using namespace std;

int main() {

	int n ,k;
	cout << "enter the rows";
	cin >> n;
	cout << "enter no of columns";
	cin >> k;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			cout << j;
		}
		cout << endl;
	}
}