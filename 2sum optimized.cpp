#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int  main() {
	vector<int> arr = { 5,2,11,7,15 };
	int target;
	cout << "enter the target";
	cin >> target;
	vector<int>ans;
	unordered_map<int, int> mp;

	for (int i = 0; i < arr.size(); i++) {
		int first = arr[i];
		int sec = target - first;

		if (mp.find(sec) != mp.end()) {
			ans.push_back(mp[sec]);
			ans.push_back(i);
			break;
		}

		mp[first] =i;
	}
	for (int x : ans) {
		cout << x<<" ";
	}
	return 0;
}
