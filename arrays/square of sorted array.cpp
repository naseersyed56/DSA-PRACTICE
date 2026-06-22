#include<iostream>
#include<vector>
using namespace std;

int main() {
	int j;
	cout << "enter the no elements";
	cin >> j;
	vector<int>arr(j);
	
	for (int i = 0; i <arr.size(); i++) {
		cin >> arr[i];

	}
	int st = 0, d  = j - 1 , n = j -1;
	vector<int>brr(j);

while (st <= d && n>=0) {

	if (abs(arr[st]) > abs(arr[d])) {

		brr[n] = arr[st]* arr[st];
            st++;
	}
	else {
		brr[n] = arr[d]* arr[d];
		d--;
	}

	n--;
}

	for (int y : brr) {
		cout << y << " ";
	}


};