#include <iostream>
using namespace std;
int main() {
    
int pint;    
int num=1;
int sum=0;
cout << "Enter a positive integer\n";
cin >> pint;

//if input is incorrect terminate
if (pint < 0){
cout << "You did not enter a positive integer\n";
return 0;
}

for (int r=1; r<=pint; r++){
    for (int c=1; c<=r; c++){
    
    cout << c << " ";
    sum = sum + c;
    if (c == r){
        cout <<"the sum is " << sum <<endl;
        sum = 0;
    }
    
        
    }
}


    return 0;
}