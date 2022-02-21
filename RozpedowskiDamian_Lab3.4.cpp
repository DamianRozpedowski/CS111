#include <iostream> 
using namespace std;
int main() {

string name; 
int height;
	
cout << "Please enter your name and your height in inches: " ;
cin >> name >> height ;

cout << "Hello " << name << " you are " << height * 2.54 << " centimeters tall" << endl;





return 0;
}
