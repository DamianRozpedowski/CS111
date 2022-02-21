#include <iostream>
using namespace std;
int main() {

int inpnum;
int track=1;
int square=1;

cout << "Enter a number greater than 100\n";
cin >> inpnum;

//User Needs to enter a num greater than 100
while (inpnum <= 100){
  cout << "ERROR\n";
  cout << "Enter a number greater than 100\n";
  cin >> inpnum;  
}

//track and square are set to 1 since its guaranteed a num above 100 will be greater than 1, while the inputed num is less than the square of the track number the while loop will keep running
while (inpnum > square){
  cout << track << " ";
  cout << square << endl;
  track++;
  square = track * track;
}

  return 0;
}