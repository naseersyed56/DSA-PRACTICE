#include<iostream>
#include<vector>
using namespace std;

void insertion_sort(vector<int>*a, int* n) {

	for (int i = 1; i < *n; i++) {

		int key = (*a)[i];
		int j = i - 1;

		while (j >= 0 && (*a)[j] > key) {

			(*a)[j + 1] = (*a)[j];
			j--;
		}
		(*a)[j + 1] = key;
	}

	for (int i = 0; i < *n; i++) {
		cout << (*a)[i] << " ";
	}
}

int main() {

	vector<int>arr = { 12,-2,2,3,4 };
            
	int k = arr.size();

	insertion_sort(&arr, &k);

	return 0;
}