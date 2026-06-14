#include<iostream>
#include<string>
using namespace std;

string rever(string s) {

	int start = 0, end = s.length()-1;
	while (start < end) {

		char k = s[start];
		s[start] = s[end];
		s[end] = k;
		start++, end--;
	}
	return s;
}

int main() {

	string s;
	cout << "enter a string";
	getline(cin, s);
	cout << rever(s);

	return 0;
}
