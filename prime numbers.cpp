#include<iostream>

using namespace std;

int main() {
	int n;
	cout << "enter a number";
	cin >> n;
	if (n<=1) {
		cout << "NOT PRIME";
		return 0;
	}
	if (n > 2 && n % 2 == 0) {
		cout<<"NOT PRIME";
		return 0;
	}
	
	bool isprime = true;
	
		for (int i = 2; i <= n / 2; i++) {
			if (n % i == 0) {
				isprime = false;
				break;
			}
			}
		if (isprime) {
			cout << n << " is a prime";
		}
		else {
			cout << n << "is not a prime";
		}

		
	
         return 0;
};
