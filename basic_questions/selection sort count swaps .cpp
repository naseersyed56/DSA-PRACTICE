#include<vector>
#include<iostream>
using namespace std;
int count_swaps = 0;
void selection1_sort(vector<int>& arr) {

	cout << " selection sort started \n";


	for (int i = 0; i < arr.size(); i++) {
		int idx = i;
		for (int j = i; j < arr.size(); j++) {

			if (arr[j] < arr[idx]) {
				idx = j;
			}
		}
		cout << " swapping elements are " << arr[idx] << "and" << arr[i] << endl;
		int temp = arr[i];
		arr[i] = arr[idx];
		arr[idx] = temp;
		count_swaps++;
	}



}


void vec_nd_sort() {
	int p;
	cout << "enter the size og array \n";
	cin >> p;
	vector<int>arr(p);
	for (int i = 0; i < p; i++) {
		cout << "enter the " << i << " element :\n";
		cin >> arr[i];
	}
	for (int j = 0; j < p; j++) {
		cout << "entered  " << j << " element is :"<< arr[j]<<endl;
		
	}


	 selection1_sort(arr);
	 for (int j = 0; j < p; j++) {
		 cout << "sorted  array is  :" << arr[j] << endl;

	 }
	 cout << "total times swapped \n" << count_swaps;

}

int main() {

	vec_nd_sort();

	return 0;
}