#include <iostream>
using namespace std;
int main() {

//declaring big and small integer
int bigint;
int n;

cout << "Enter an Integer\n";
cin >> bigint;


//runs 4 times and keeps tracking if n is less than big int
for (int track=0; track < 4; track++){

    cout << "Enter a smaller value of n: ";
    cin >> n;
    
    if (n >= bigint){
        track = 4;
        cout <<"Goodbye\n";
    }
  
   bigint = n;
   
}


    return 0;
}