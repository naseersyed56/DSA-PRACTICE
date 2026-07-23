#include<iostream>
#include<string>
using namespace std;

bool rotate_str(string s1, string s2) {

	if (s1.size() != s2.size())return false;
	if (s1 == s2)return true;
	for (int i = 0; i < s1.size(); i++) {
		
		char z=s1[0];
		s1.erase(0, 1);
		s1.push_back(z);

		if (s1 == s2) {
			cout << "true" << endl;
			return true;
		}
			
		cout << s1 << endl;
		cout << s2 << endl;


	}
	cout << "false";




	return false;

}

int main() {

	string s1 = "naseer";
	string s2 = "ernase";

	rotate_str(s1, s2);

	return 0;
}