#include<iostream>
using namespace std;

class k {
public: 
	 k() {
		cout << "it is a constructed";
	}
};
class l :public k { public:  l() { cout << " it is a constructer of derived 1 class\n "; } };

class m :public k {public:  m(){cout << " it is a constructer of derived class 2\n"; }};

class n :public k, public m { public:  n() { cout << " it is a constructor of derived 3rd class it inherited from both 2nd and 3rd class \n"; } };

int main() {
	n de;
}