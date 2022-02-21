#include <iostream>
using namespace std;
int main() {

int odd;

cout << "Enter an odd integer\n";
cin >> odd;
//makes sure user inputs odd value
while (odd % 2 != 1){
  cout << "Enter an odd integer\n";
  cin >> odd;
}

//for loop inside another for loop to create a box thats odd in length and height
for (int r=1; r<=odd; r++){

  for (int c=1; c <=odd; c++){
    if (r ==c && c < odd/2+1){
      cout <<"+";
    }
    else if (r == odd/2+1 && c == odd/2+1 ){
      cout << "*";
    }
    else if (r == c  && c >odd/2+1){
      cout << "x";
    }
    else {
      cout <<" ";
    }
  }
  cout << endl;
}


    return 0;
}