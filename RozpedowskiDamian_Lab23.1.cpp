#include <iostream>
using namespace std;
int main () {

	bool digits[10];
	int x;

	cout<<"Enter a number that is at most 100: ";
	cin>>x;

	if(x < 0 || x > 100) {
		cout<<"BETWEEN 0-100: ";
		cin>>x;
	}
	
	int data[x];

	cout<<"Enter "<<x<<" digits ";

	for (int i = 0; i < x; i++) {
		cin>>data[i];
	}
	
	for(int i = 0;i < x; i++) {
		for (int j = 0; j < 10; j++) {
			if (data[i] == j) {
				digits[j]=true;
			}
		}
	}
	
	for (int k = 0;k < 10; k++) {
		if (digits[k] == false) {
			cout<<"The digit " << k <<" was not entered \n";
		}
	}
	return 0;
}
