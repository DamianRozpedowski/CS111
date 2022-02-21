#include <iostream>
using namespace std;
int main() {

int inpnum;
int factortrack =1;

cout << "Enter a number between 1 and 100\n";
cin >> inpnum;

//User Needs to enter a num between 1 and 100
while (inpnum < 1 || inpnum >100){
  cout << "ERROR\n";
  cout << "Enter a number between 1 and 100\n";
  cin >> inpnum;  
}

cout << "The first 20 multiples of " << inpnum << " are: ";

//continues to list factors until it reaches 20
while (factortrack <= 20){
  cout << inpnum * factortrack << " ";
  factortrack++;
}

  return 0;
}