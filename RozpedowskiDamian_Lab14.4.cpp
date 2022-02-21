#include <iostream>
using namespace std;


int oddLessEven(int x){
    int even=0;
    int odd=0;
    int rightd;
    int result;
    
    while (x > 0){
    rightd = x%10;    
    x = x/10;
    if (rightd %2 ==0){
        even +=  rightd;
    }
    else {
        odd +=  rightd;
    }
}
   result = odd - even;
   return result;
}


int main() {    
    
   cout << oddLessEven(23) << endl; 
   // prints 1

    cout << oddLessEven(1234) << endl; 
    // prints -2

    cout << oddLessEven(777) << endl; 
    // prints 21

    return 0;
}

