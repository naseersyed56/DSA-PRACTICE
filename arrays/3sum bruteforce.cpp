#include<iostream>
#include<vector>
using namespace std;

int main() {

	int  a ,target;
	cout << "enter a no of elements in array";
	cin >> a >> target;
	vector<int>wee(a);
	int s = wee.size()-1;

	for (int i = 0; i <= s; i++) {
		cin >> wee[i];
	}
	for (int i = 0; i <= s; i++) {
		cout<< wee[i];
	}

	for (int i = 0; i < s - 1; i++) {
		for (int j = i + 1; j < s; j++) {
			for (int k = j + 1; k < wee.size(); k++) {

				if (wee[i] + wee[j] + wee[k] == target)
					cout << wee[i] << wee[j] << wee[k];
			}
			cout << "  ";
		}
		cout << endl;
	}
}