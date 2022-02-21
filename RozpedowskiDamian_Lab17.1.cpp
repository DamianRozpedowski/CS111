#include <iostream>
using namespace std;

int thirdDigit(int x){
    if (x >= 100){
    
    while (x >999){
       x = x/10 ; // turns any number with more than 3 digits into a 3 digit num
    }
    while (x >= 10){
     x = x%10; // then takes the last digit of that num which is the 3rd num
    }
    
    return x;
    }
    
    
    return 0; //otherwise if the num has less than 3 digits return 0
    
    
}


int main() {
int x;
cout << thirdDigit(347) << " " << thirdDigit(2048) << " " << thirdDigit(560125) << endl;

cout << "Your Turn, Give me an int: ";
cin >> x;
cout << thirdDigit(x);

    return 0;
}