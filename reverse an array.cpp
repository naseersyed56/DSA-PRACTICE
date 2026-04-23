#include<iostream>
#include<vector>
using namespace std;

void reverse_array() {
	int l;
	cout << "enter size of vector";
	cin >> l;
	vector<int>crr(l);

	for (int i = 0; i < l; i++) {
		cin >> crr[i];
}
for (int i = 0; i < l; i++) {
	cout << crr[i] << " ";
}
cout << "  " << endl;
for (int i = 0, j = l - 1; i < j; i++, j--) {
	int temp = crr[i];
	crr[i] = crr[j];
	crr[j] = temp;
}
for (int i = 0; i < l; i++) {
	cout << crr[i] << "  ";
}

}


int main() {

	reverse_array();

	return 0;
}