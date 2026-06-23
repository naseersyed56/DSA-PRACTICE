#include<iostream>
#include<vector>
using namespace std;

vector<int>create_array() {

	int n;
	cout << "enter the size of array \n";
	cin >> n;
	vector<int>krr(n);

	for (int i = 0; i < n; i++) {
		cout << "enter the element \n" << i;
		cin >> krr[i];
	}
	for (int i = 0; i < n; i++) {

		cout <<"the "<<i<<"element is "<< krr[i] << " "<<endl;
	}
	return krr;
}
vector<int>remove_duplicates(vector<int>arr) {

	int j = 0;
	for (int i = 1; i < arr.size(); i++) {

		if (arr[j] != arr[i]) {
			//just for checking how it working inernally
			cout << arr[j] << " " << arr[i] << endl;
			j++;
			arr[j] = arr[i];
		}
	}
	arr.resize(j + 1);
	cout << "after resizing array /n";
	for (int j : arr) {
		cout << j << endl;
	}
	return arr;
}

int main() {
	vector<int>arr = create_array();
	remove_duplicates(arr);

	return 0;
}

