#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main() {


	vector<int>v = {7,4,1,2,3,4,5 };
	sort(v.begin(), v.end());

	for (auto i : v) {

		cout << i << endl;
	}
	return 0;

}
