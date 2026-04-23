#include<iostream>
#include<climits>
using namespace std;

int main() {
	int arr[] = { -2,13,1,-15,6 };


	int l = sizeof(arr) / sizeof(arr[0]);
	cout << l;
	int  max_sub_arr_sum = INT_MIN, totalsubarrays = 0;

	for (int st = 0; st < l; st++) {
		for (int j = st; j < l; j++) {
			int curr_sub_arr_sum = 0;
			for (int k = st; k <= j; k++) {
				cout << arr[k];
				curr_sub_arr_sum += arr[k];
				
			}
			max_sub_arr_sum = max(max_sub_arr_sum, curr_sub_arr_sum);


			totalsubarrays++;
			cout << "  ";
		}
		cout << endl;
	}
	cout << max_sub_arr_sum << "final max sumof sub array" << endl << totalsubarrays << "total sub arrays";

	return 0;
};