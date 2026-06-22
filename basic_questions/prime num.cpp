#include<iostream>
using namespace std;

bool isprime(int& x) {

	if (x < 2)return false;

	for (int i = 2; i <= x / 2; i++) {

		if (x % i == 0)return false;
	}
	return true;
}
int main() {

	int l;
	cout << "enter the number to check whether the number is pime or not";
	cin >> l;

	if(isprime(l))
		cout<<"it is a prime number"<<endl;
	else{
		cout << l<<" " << " is  not a prime number";
		}

	return 0;
}
