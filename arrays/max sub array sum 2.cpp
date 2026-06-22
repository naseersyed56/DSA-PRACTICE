#include<iostream>
#include<climits>
using namespace std;
int main() {

	int arr[] = { 2,3,4,5,2 };

	int sizel = sizeof(arr) / sizeof(arr[0]);
	int maxsum = INT_MIN;
	for (int st = 0; st < sizel; st++) {
		int currsum = 0;
		for (int end = st; end < sizel; end) {
			currsum += arr[end];
			maxsum = max(currsum, maxsum);
		}

	}
	cout << "max sub array sum " << maxsum << endl;
	system("pause");
	return 0;
};