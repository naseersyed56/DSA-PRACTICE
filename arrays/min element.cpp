#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {

	int n;
	cout << "enter a number";
		cin >> n;
	vector<int>arr(n);

	for (int i = 0; i < arr.size(); i++) {
		cin >> arr[i];
	};
	int min = INT_MAX;

	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] < min)min = arr[i];
	};
	cout << min << "min " << endl;
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	};
	return 0;
};