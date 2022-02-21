#include <iostream>
using namespace std;
int main() {

int x;
int y;
	
cout << "Please enter two integers ";
cin >> x >> y; 

cout << x + y << " is the sum of both integers" << endl ;
cout << x - y << " is recieved when subtracting y from x"<< endl ;
cout << x * y << " is the product of x and y" << endl ;
cout <<  ( x + y)/2 << " is the average of x and y" <<  endl  ;
cout << x % y << " is the remainder when x is divided by y";


return 0;
}
