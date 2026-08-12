#include<iostream>
using namespace std;

void diamond() {
	int rows;
	cout << "enter no of rows \n";
	cin >> rows;


	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows - i; j++) {
			cout << "_";
		}for (int k = 1; k <= 2 * i + 1; k++) {
			cout <<k;
		}
		cout << endl;
	}
	for (int g = rows; g >= 1; g--) {
		for (int y = 0; y <= rows - g; y++) {
			cout << "_";
		}
		for (int k = 1; k <= 2 * g - 1; k++) {
			cout << k;	
		}
		cout << endl;
	}


}

int main() {
 
	diamond();
	
}