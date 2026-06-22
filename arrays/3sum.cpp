#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<int>createvector(int &k) {

	vector<int>nas(k);

	for (int i = 0; i < k; i++) {
		cin >> nas[i];
	}

	for (int i = 0; i < k; i++) {
		cout<< nas[i]<< " ";
	}
	return nas;
}

vector<vector<int>>sum3(vector<int> &arr, int size) {

	vector<int>arr2 = createvector(size);

	vector<vector<int>>bss;

	sort(arr2.begin(), arr2.end());
	for (int i = 0; i < arr2.size() - 2; i++) {

		if (i > 0 && arr2[i] == arr2[i - 1]) continue;

		int left = i + 1;
		int right = arr2.size() - 1;

		while (left < right) {
			int sum = arr2[i] + arr2[left] + arr2[right];
			if (sum == 0) {
				bss.push_back({ arr2[i], arr2[left], arr2[right] });

				left++, right--;
				while (left < right && arr2[left] == arr2[left - 1])
					left++;
				while (left < right && arr2[right] == arr2[right + 1])
					right--;
			}
			else if (sum < 0) left++;
			else right--;
		}
	}
	return bss;
}
int main() {
	int n;
	cout << "enter a size of vector";
	cin >> n;;
	vector<int>crr = createvector(n);
	
	vector<vector<int>>result = sum3(crr, n);

	for (int i = 0; i < result.size(); i++) {
		for (int j = 0; j < result[i].size(); j++) {


			cout << result[i][j] << "  ";
		}
		cout << endl;;
	}

	

}