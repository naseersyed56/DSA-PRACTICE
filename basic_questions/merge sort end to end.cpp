	  
#include<iostream>
#include<vector>
using namespace std;

int arr_size() {
	int j;
	cout << "enter size of array \n";
	cin >> j;
	return j;
}



vector<int> create_arr() {

 int y=	arr_size();

	vector<int>arr(y);

	for (int i = 0; i < y; i++) {
		cout << "enter the  " << i << "element \n";
		cin >> arr[i];
	}

	for (int i = 0; i < y; i++) {
		cout << "the " << i << " element is  \n" << arr[i];
	}
	return arr;
}



void mergeall(vector<int> &csk, int start, int mid, int end) {

	int left = start, right = mid + 1;

	vector<int>kkr;

	while (left <= mid && right <= end) {

		if (csk[left] <= csk[right]) {

			cout << csk[left] << " this is left element while comparing \n";
			cout << csk[right] << "this is the right element while compartng \n";
			kkr.push_back(csk[left]);
			left++;
		}
		else {
			kkr.push_back(csk[right]);
				right++;
		}
	}

	while (left <= mid) {
		kkr.push_back(csk[left]);
		left++;
	}
	while (right <= end) {
		kkr.push_back(csk[right]);
		right++;
	}
	for (int i = 0; i < kkr.size(); i++) {

		cout << kkr[i] << " ";
	}


	for (int i = start; i <= end; i++) {
		 
		csk[i] = kkr[i - start];
		cout << csk[i] <<" ";
	}

	for (int i = 0; i < csk.size(); i++) {

		cout << csk[i] << endl;
 

	}

}

void mergesort(vector<int>&mi ,int start ,int end) {

	if (start >= end)return;

	int mid = start + (end - start) / 2;
	//merging first half(left)

	mergesort(mi, start, mid);

	//merging second half(right)

	mergesort(mi, mid + 1, end);

	//merging total elements

	mergeall(mi, start, mid, end);


 }



int main() {


	vector<int>crr = create_arr();
	mergesort(crr, 0, crr.size() - 1);

	cout << "fromm the main function \n";
	for (int i : crr) {

		cout << i << " ";
	}

	return 0;
}
	

