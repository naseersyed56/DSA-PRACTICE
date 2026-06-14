#include<iostream>
#include<string>
#include<cctype>
using namespace std;


bool ispalindrome(string& s) {

	int start = 0, end = s.size()-1;

	while (start < end) {
		
		if (!isalnum(s[start])) {
			start++;
			continue;
		}
		if (!isalnum(s[end])) {
			end--;
			continue;
		}

		
		if (tolower(s[start]) != tolower( s[end])) {

			return false;
		}
		else {
			start++, end--;
		}
	}

	return true;
}
int main() {
	string s;
	cout << "enter a string";

	getline(cin , s);

	cout << s << endl;

	if (ispalindrome(s)) {

		cout << "yes it is palindrome";
	}
	else {
		cout << "it is not a palindrome";
	}

}

