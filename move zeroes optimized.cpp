#include<iostream>
#include<vector>
using namespace std;
int main() {

	int l;
	cout << "enter the size of elements";
	cin >> l;
	vector<int>arr(l);

	for (int i = 0; i < l; i++) {
		cin >> arr[i];
	}

	int left = 0;
	for (int right = 0; right < l; right++) {
		if (arr[right] != 0) {
			swap(arr[right] , arr[left] );
			left++;
		}
	}
	for (int i = 0; i < l; i++) {
		cout << arr[i];
	}
	return 0;
}