#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void arrayFun(int a[],int cap) {

	int sum = 0;
	int min, max, avg;

	for (int i = 0; i < cap; i++) {
		sum += a[i];
	}
	avg = ((double)sum) / cap;

	max=a[0];

	for(int j = 0; j < cap; j++) {
		if (a[j] > max) {
			max=a[j];
		}
	}
	
	min= a[0];

	for (int k = 0; k < cap; k++) {
		if (a[k] < min) {
			min = a[k];
		}
	}

	cout<<"MAX: " << max <<".\n";
	cout<<"MIN: " << min <<".\n";
	cout<<"AVG: "<< avg <<".\n";
	cout<<"SUM: " << sum <<".\n";
	

	return;
}
int main () {
	srand(time(0));

	int x;

	cout<<"Enter an array size: ";
	cin>>x;

	if (x<0) {
		cout<<"Must be positive: ";
		cin>>x;
	}

	int data[x]= {rand()%100+1};
	arrayFun(data, x);

	return 0;
}
