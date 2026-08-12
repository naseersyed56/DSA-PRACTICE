#include<iostream>
using namespace std;

void  mid_right() {

	int rows = 0;
	cout << "enter no rows \n";
	cin >> rows;

	  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < rows - i; j++) {
			cout << " ";
		}
			for(int k =0; k<2*i+1 ;k++){

				cout << "*";
		     }
			cout << endl;
	}

	return;

}
int main() {

	mid_right();


}