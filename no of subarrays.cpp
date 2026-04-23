#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int t;
	cout << "enter  lenght of array";
	cin >> t;
	vector<int>frr(t);
	
	int l = frr.size();
	cout << "total no of subarrays should be" << l * (l + 1) / 2<<endl;

	for (int i = 0; i < l; i++) {
		cin >> frr[i];
	}
	cout << " elements are ";
	for (int i = 0; i < l; i++) {
		cout<< frr[i]<<" "<<endl;
	}
	int count = 0;
	for (int st = 0; st < l; st++) {
		for (int j = st; j < l; j++) {
			for (int y = st; y <= j; y++) {

				cout << frr[y];
			}
			cout << " ";
			count++;
		}
		cout << endl;
	}
	cout << endl<<" ";
	if(l * (l + 1) / 2 ==count)
	cout << count << " total no of sub arrays are eql after comparision";

	return 0;
}