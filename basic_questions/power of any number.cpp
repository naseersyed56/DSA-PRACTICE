#include<iostream>
using namespace std;


void call_power(int &base,int &power) {

	cout << "you are going to find the power of the number  \n" << "press enter to continue\n";
	
	cout << "enter base \n" << "enter power \n";
	cin >> base >> power;
	cout << "the base you entered \n"<<base << "\n the power you entered \n"<<power;
	
}

void power() {

	int base ,power;
	double ans = 1;
	call_power(base ,power);
	cout << "\n the base u entered \n" << base << "\n the  power u entered \n" << power;

	if (power == 0) {
		cout << "ans is \n" << base;
		
	}
	else   {

		for (int i = 1; i <=abs( power); i++) {
			ans *= base;
		}
		if (power > 0) {
			cout <<"\n ans is \n "<< ans << endl;
			
		}
		else {
			cout << "\n ans is \n" <<1.0 / ans << endl;
			
		}
	}
}

int main() {

	power();

}