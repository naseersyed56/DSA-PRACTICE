#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string revers(string& s) {

	int start = 0, end = s.size()-1;
	while (start < end) {

		char k = s[start];
		s[start] = s[end];
		s[end] = k;

		start++, end--;
	}
	return s;
}

void takeinput() {

	string s;
	
	getline(cin, s);

	cout << revers(s);
}

int main() {
	takeinput();
	
}
