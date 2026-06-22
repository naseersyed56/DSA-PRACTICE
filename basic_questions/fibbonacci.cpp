#include<iostream>
using namespace std;

int fibnocci() {

	int l = 0;
	cout << "enter which fibnocci u want";
	cin >> l;


	int k = 0;
	for (int j = 1; j <= l; j++) {

		k += j;
	}
	cout << k;

	return k;
}
int  main() {

	fibnocci();
	
}
