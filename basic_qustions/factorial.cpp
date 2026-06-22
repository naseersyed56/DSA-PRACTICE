#include<iostream>
using namespace std;

int factorial(int& k) {
	int fact = 1;
	for (double i = 1; i <= k; i++) {

		fact = fact* i;
	}
	return fact;
}

int main() {
	int h;
	cout << "enter a number to which u want its factorial"<<endl;
	cin >> h;
	cout << factorial(h);

	return 0;
}
