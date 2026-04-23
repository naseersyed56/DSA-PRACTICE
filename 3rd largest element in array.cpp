#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main() {
	int g;
	cout << "entre a number";
	cin >> g;
	vector<int>wee(g);
	
	for (int i = 0; i < g; i++) {
		cin >> wee[i];
	}
	int max = INT_MIN, s_max = INT_MIN, t_max = INT_MIN;

	for (int i = 0; i < g; i++) {

		if (wee[i] > max) {

			t_max = s_max;
			s_max = max;
			max = wee[i];
		}
		else if (wee[i] > s_max && wee[i] != max) {

			t_max = s_max;
			s_max = wee[i];
		}
		else if (wee[i] > t_max && wee[i] != s_max) {

			t_max = wee[i];
		}
	}
	cout << " 3rd largest elemnt in array is " << t_max;
	return 0;
}