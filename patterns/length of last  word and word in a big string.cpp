#include<iostream>
#include<string>
using namespace std;

void length_of_lastword(string &t) {
	
	int siz = t.size()-1;
	int count = 0;
	string s;
	for (int i = siz; i >= 0; i--) {
		if (t[i] != ' ') {
			count++;
			s += t[i];
		}
		else if (count > 0)break;
			
	}

	int i = 0, j = s.size()-1;

	cout << s<<endl;
	while (i<j) {

		char k = s[i];
		s[i] = s[j];
		s[j] = k;
		i++, j--;
	}

	cout << s;

    		
	
}
int main() {
	string s;
	cout << " enter the string \n";
getline(cin, s);
	length_of_lastword(s);

	return 0;
}