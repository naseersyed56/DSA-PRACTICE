#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {

	int r;
	cout << "enter sizer of array";
	cin >> r;
	vector<int>qee(r - 1);


	for (int i = 0; i < r-1; i++) {

		cin >> qee[i];
	}
	int sum = 0;
	for (int i = 0; i < r-1; i++) {
		sum += qee[i];
	}
	int totalsum = r * (r + 1) / 2;

	int missing_element = totalsum - sum;

	cout << "missing elemnt is " << missing_element;
	return 0;

};