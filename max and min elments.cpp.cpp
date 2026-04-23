// max and min elments.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {

	int k;
	cout << "enter the number";
	cin >> k;
	vector<int>vect(k);
	for (int i = 0; i < vect.size(); i++) {
		cin >> vect[i];
	};
	int max = INT_MIN;
	int min = INT_MAX;
	for (int i = 0; i < vect.size(); i++) {
		if (vect[i] > max)max = vect[i];
		if (vect[i] < min)min = vect[i];
	};

	cout << "max  " << max << endl;
	cout << "min  " << min << endl;

	for (int i = 0; i < vect.size(); i++) {
		cout << vect[i] << " ";
	};
	return 0;
};


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
