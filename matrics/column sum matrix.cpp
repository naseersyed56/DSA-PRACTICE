#include<iostream>
using namespace std; 

int main() {

	int rows = 3, col = 3, mat[3][3];

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < col; j++) {
			cout << "enter " << i << " " << j << "element";
			cin >> mat[i][j];
		}
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < col; j++) {
			cout<< mat[i][j]<<" ";
		}
		cout <<endl;
	}
	int colsum;
	for (int i = 0; i < col; i++) {
		colsum = 0;


		for (int j = 0; j < rows; j++) {
			colsum += mat[j][i];

		}
		cout <<"the sum of elements in column  "<<i<< "  is   "<<colsum << endl;
	}
}