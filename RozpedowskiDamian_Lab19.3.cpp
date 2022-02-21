#include <iostream>
using namespace std;

int sumDigits(int x){
    if (x <10){
        return x; // if there is only 1 digit in the number returns that digit
    }
    
    return sumDigits(x/10) + (x % 10);
    
}

int main() {
   int x;
   cout << sumDigits(347) << endl;
   
   cout << "Give me a integer value and I'll give the sum of all it's digits: \n";
   cin >> x;
   cout << sumDigits(x) << endl;
    return 0;
}