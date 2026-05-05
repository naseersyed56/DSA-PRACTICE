#include<iostream>
using namespace std;

int main() {

	int arr[] = { 5,2,11,7,15 };
	int leng = sizeof(arr) / sizeof(arr[0]);
	int target;
	cout << "enter the target";
	cin >> target;
	for (int i = 0; i < leng; i++) {
		for (int j = i + 1; j < leng; j++) {

			if (target == arr[i] + arr[j]) 
				cout << arr[i] << " " << arr[j]<<endl;
		
		}

}
	return 1;
}
