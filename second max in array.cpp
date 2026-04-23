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
		int max = INT_MIN;
		int smax = INT_MIN;

		for (int i = 0; i < k; i++) {
			if (zaa[i] > max) {
				smax = max;
				max = zaa[i];
			}
			else if (zaa[i] > smax && zaa[i] != max) {
				smax = zaa[i];
			}
		}
		cout << " second max " << smax << endl;
		cout << "  max element  " << max << endl;

		return 0;
}