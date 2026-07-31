#include<iostream>;
using namespace std;

class node {
public:

	int data;
	node* next;

	node(int value) {
		

		data = value;
		next = NULL;
	}
};

void create__linkedlist() {
	int siz, el;
	cout << "enter the size of linked list \n";
	cin >> siz;
	cout << "enter 1st element \n";
	cin >> el;
	node* head = new node(el);
	node* dummy = head;
	for (int i = 1; i < siz; i++) {
		int e;
		cout << "enter the element " << i + 1 << endl;

		cin >> e;
		dummy->next = new node(e);
		dummy = dummy->next;

	}
	node* toshow = head;;
	for (int i = 0; i < siz; i++) {

		cout << toshow->data << " --" << toshow << " -- address\n";

		if (toshow) toshow = toshow->next;
		else cout << " nodes completed";
	}


	return ;
}
int main(){

	create__linkedlist();

	return 0;

}