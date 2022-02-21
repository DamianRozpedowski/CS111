#include <iostream>
using namespace std;

int biggestDigit(int x);

int main()
{
    int x;
    
    cout << biggestDigit(29) << endl; // prints 9

    cout << biggestDigit(31415) << endl; // prints 5

    cout << biggestDigit(7) << endl; // prints 7
   
   cout << "Your turn give me a number: ";
   cin >> x;
   cout << biggestDigit(x) << endl; 
    return 0;

}

int biggestDigit(int x){
    if (x < 10){
        return x;
    }
    
    int ln = x % 10;
    
    if (biggestDigit(x/10) < ln){
        return ln;
    }
    
    else{
        return biggestDigit(x / 10);
    }
}