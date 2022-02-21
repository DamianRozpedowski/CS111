#include <iostream>
using namespace std;
int main() {
  
int pnum;


cout <<"Enter a positive number\n";
cin >> pnum;

//while user input is not 1 or larger keep asking
while (pnum < 1){
  cout <<"Error, Enter a positive number\n";
cin >> pnum;
}

// If the num is even then it will be displayed as a negative by subtracting it from 0, otherwise shows positive value
for (int cnum =1; cnum <= pnum; cnum++){

  if (cnum % 2 == 0){
     cout << 0 - cnum << " ";
  }
  else {
    cout << cnum << " ";
    

  }
}

return 0;
}