#include<iostream>
#include<vector>
using namespace std;
int main() {

	int o;
	cout << "enter a number";
	cin >> o;
	vector<int>zaa(o);
	int k = zaa.size();
	for (int i = 0; i < k; i++) {
		cin >> zaa[i];
	}
	int min = INT_MAX;
	int smin = INT_MAX;

	for (int i = 0; i < k; i++) {
		if (zaa[i] < min) {
			smin = min;
			min = zaa[i];
		}
		else if (zaa[i] < smin && zaa[i] != min) {
			smin = zaa[i];
		}
	}
	
	cout << " second min " << smin << endl;
	cout << "  min element  " << min << endl;

	return 0;
}