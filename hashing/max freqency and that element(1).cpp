#include<iostream>
#include<unordered_map>
#include<vector>
#include<climits>
using namespace std;

vector<int>arr() {
	int g;
	cout << "enter the size of array \n";
	cin >> g;

	vector<int>wee;
	for (int i = 0; i < g; ++i) {
		int q = 0;
		cin >> q;
		wee.push_back(q);
	}
	return wee;
}

int max_freq(vector<int>& arr) {

	unordered_map<int, int>count_freq;

	for (int i = 0; i < arr.size(); i++) {
		count_freq[arr[i]]++;
	}

	int maxi = INT_MIN ,max_ele;

	for (pair<int, int> d : count_freq) {

		if (d.second > maxi) {
			maxi = d.second;
			max_ele = d.first;
		}
	} 
	cout << maxi << " max frequency \n" << max_ele << " max_ele\n";
	return 0;

}

int main() {

	vector<int>brr = arr();
	max_freq(brr);
}
