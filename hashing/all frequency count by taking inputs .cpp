#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int>create_array(int&n){

vector<int>drr(n);

for (int i = 0; i < n; i++) {

	cout << "enter the element " << i;
	cin >> drr[i];
}

for (int i = 0; i < n; i++) {
	cout << "the element is " << i;
	cout << drr[i] << endl;
}

return drr;
}

int frequency(vector<int>&arr) {

	//vector<int>fre = arr;

	unordered_map<int, int>kl;
	for (int i = 0; i < arr.size(); i++) {

		kl[arr[i]]++;
	}
	for (pair<int, int> j : kl) {
		cout << j.first << "->" << j.second<<endl;
	}

	return 0;
}





int main() {

	int n;
	cout << "enter the size of array\n";
	cin >> n;


	vector<int>lsb =(create_array(n));
	frequency(lsb);

}
