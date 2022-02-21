#include <iostream>
using namespace std;
int main() {
  
int inpnum;
int oddnum=0;

cout << "Enter a positive integer\n";
cin >> inpnum;

//Checks for positive integer value
while (inpnum < 1){
  cout << "Error, Enter a positive integer\n";
cin >> inpnum;
}

if (inpnum % 2 == 1){
 oddnum++;
}

cout << "Enter 4 more integers\n";

//for loop that repeats the code 4 times total
for(int track=0; track < 4 ; track++){

cin >> inpnum;

if (inpnum % 2 == 1){
 oddnum++;
}

}

cout << oddnum << " were odd\n";


return 0;
}