#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	vector<int> arr = {5,2,11,7,15};
	int leng = arr.size();
	cout << "length of array " << leng << endl;
	int left = 0, right = leng - 1 ,target;
	cout << "enter the target " << endl;
	cin >> target;
	sort(arr.begin(), arr.end());

	while (left < right) {
		int sum = arr[left] + arr[right];
		if (target == sum) {
			cout << arr[left]  << " " << arr[right] ;
			break;
		}
		else if (sum > target)right--;
		else left++;
		}
		return 0;

	}