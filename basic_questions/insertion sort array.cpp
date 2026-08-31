#include<iostream>
using namespace std;

void insertion_sort(int *arr, int *n) {


	for (int i = 0; i < *n; i++) {

		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > key) {

			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}

	for (int i = 0; i <*n; ++i) {

		cout << arr[i];
	}
}

int main() {

	int crr[] = { 34,12,3,34,0 };

	int s = sizeof(crr) / sizeof(crr[0]);

	insertion_sort(crr, &s);
}