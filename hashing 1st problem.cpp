#include<iostream>
#include<vector>
#include<unordered_map>
//#include<map>
using namespace std;

int main() {

	int n;
	cout << "enter lenght of value";
	cin >> n;
	vector<int>mrr(n);
	for (int i = 0; i < n; i++) {
		cin >> mrr[i];
	}
	for (int i = 0; i < n; i++) {
		cout<< mrr[i];
	}
	unordered_map<int, int> mpp;
	for (int i = 0; i < n; i++) {
		mpp[mrr[i]]++;
	}

		int q;
		cout << "entere q value";
		cin >> q;
	while (q--) {
		int number;
		cout << "enter number value";
		cin >> number ;
		cout << mpp[number]<<endl;
	}

}