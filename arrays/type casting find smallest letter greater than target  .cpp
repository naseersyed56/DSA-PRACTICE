//You ar given an array of characters letters that is sorted in non - decreasing order, and a character target.There are at least two different characters in letters.
// 744  leetcode 
//
//	 find the smallest target grerater than the target
//Return the smallest character in letters that is lexicographically greater than target.If such a character does not exist, return the first character in letters.
//
//Example 1:
//
//Input: letters = ["c", "f", "j"], target = "a"
//Output : "c"
//Explanation : The smallest character that is lexicographically greater than 'a' in letters is 'c'.
//Example 2 :
//
//	Input : letters = ["c", "f", "j"], target = "c"
//	Output : "f"
//	Explanation : The smallest character that is lexicographically greater than 'c' in letters is 'f'.
//	Example 3 :
//
//	Input : letters = ["x", "x", "y", "y"], target = "z"
//	Output : "x"
//	Explanation : There are no characters in letters that is lexicographically greater than 'z' so we return letters[0].

#include<iostream>
#include<vector>
#include<string>
using namespace std;



class solution {
public:
	char nextGreatestletter(vector<char>& letters, char target) {

		for (int l : letters) {

			if (l > (int)target) {
				char t = (char)l;
				cout <<t<< " returned in class \n";
				return t;
			}
		}
		cout << " it is not found so returning first letter of vector  of characters \n";
		return(letters[0]);
	}
};

int main() {
	solution a;

	int k;
	char target;
	cout << "enter sizee of vecctor \n";
	cin >> k;
	vector<char> arr(k);
	for (int i = 0; i < k; i++) {
		cout << "enter the char \n";
		cin >> arr[i];
	}
	for (int i = 0; i < k; i++) {
		cout << " \n the array u entrred is " << arr[i];
		
	}

	cout << " enter the target element \n";
	cin >> target;
	char z = a.nextGreatestletter(arr, target);
	cout << " element from main func \n" << z;

	
}
