#include<iostream>
using namespace std;

class vehicle {

	virtual void start() {

		cout << "start the vehicle \n";
	}

	virtual void stop() {

		cout << " stopr the vehicle \n";
		~stop();
	}

	virtual ~vehicle() {}
};
class car : public vehicle {

	void start()override {
		cout << " start teh car \n";
	}
	void stop() override {
		cout << " stop the car \n";
	}
};
class bike :public vehicle{

	void start()override {

		cout << " start the bike \n";

		void stop()override {
			cout << " stop the bike \n";
		}
	}

	class autos : public vehicle {

		void start ()override{
		cout << " start the auto \n";
	}
		void stop() override {
			cout << " stop the auto \n";

			void weels (){
				cout << " 3 weels \n";
		}
};

	int main() {

		vehicle* b = new bike();

		b->start();
		b->stop();

		delete b;
		return 0;
	}
