#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector <int> eee = { 2,3,-4, 0,5,6 };
	int k = eee.size();

	int maxsum = INT_MIN, currsum = 0, prevmax = INT_MIN, arrst = 0 ,arrtemp =0 ,end =0;
	
		for (int i = 0; i < k; i++) {

			currsum += eee[i];

			prevmax = maxsum;
			maxsum = max(currsum, maxsum);
			if (prevmax != maxsum) {
				arrst = arrtemp;
			      end = i;
			}
			if (currsum < 0) currsum = 0  ,arrtemp =i+1;
		}
		for (int i = arrst; i <= end; i++) {
			cout << eee[i] << " "<<endl;
		}
		cout << maxsum;
	}
