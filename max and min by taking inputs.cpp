#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int mini(vector<int> &
	arr) {

	int k = arr.size();
	int mini = INT_MAX;
	int maxi = INT_MIN;

		for (int i = 0; i < k; i++) {

			if (arr[i] < mini)mini = arr[i];
			if (arr[i] > maxi)maxi = arr[i];
		}
		cout << maxi << "largest element in array" << endl;
		cout << mini << "smallest element in array" << endl;


		return 0;
	};

	vector<int> createarray() {
		int k =0;
		cout << "enter size of  array";
		cin >> k;
		vector<int> arr(k);
		
		for (int i = 0; i <k; i++) {
			cout << i + 1 << "element" << endl;
			cin >> arr[i];
		}
		cout << "the array is" << endl;
		for (int i = 0; i < arr.size(); i++) {
			cout << arr[i]<<" ";
		}
		cout << endl;
		return arr;
	}

	int main() {

		vector<int>arr = createarray();

		mini(arr);


		return 0;
	}