#include<iostream>
#include<vector>
using namespace std;

int main() {

	int k;
	cout << "enter the array size";
	cin >> k;
	vector<int>arr(k);

	int l = arr.size(), st = 0, end = l - 1;

	
	for (int i = 0; i < l; i++) {


		cin >> arr[i];
	}
	cout << endl;
	for (int i = 0; i < l; i++) {
		cout << arr[i]<<" "<<endl;
	}
	while (st < end) {

		if (arr[st] != 0) {
			st++;
		}
		else if (arr[end] != 0) {
			swap(arr[st], arr[end]);
			st++, end--;
		}
		else {
			end--;
		}
	}
	for(int x : arr) {
		cout << x << " ";
	}
}