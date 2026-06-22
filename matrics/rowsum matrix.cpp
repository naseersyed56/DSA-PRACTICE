#include<iostream>
using namespace std;

int main() {
	int rows = 3, col = 3, arr[3][3];

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < col; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < col; j++) {
		cout<< arr[i][j]<<" ";
		}
		cout << endl;
	}
	int rowsum;
	for (int i = 0; i < rows; i++) {
		rowsum = 0;
		for (int j = 0; j < col; j++) {
			rowsum += arr[i][j];
		}
		cout << rowsum<<endl;
	}

}