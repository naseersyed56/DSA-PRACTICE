#include<iostream>
using namespace std;

int main() {
	int rows = 4, col = 3, mat[4][3];

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < col; j++) {
			cout << "enter" << i << " " << j << "element";
			cin >> mat[i][j];
		}
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < col; j++) {
			cout<< mat[i][j]<<" ";
		}
		cout << endl;
	}
	int maxe = INT_MIN;
	int mine = INT_MAX;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < col; j++) {
			maxe =max( maxe ,mat[i][j]);
			mine = min(mine, mat[i][j]);
		}
	
	}
	cout << maxe << endl;
	cout <<mine<< endl;
}