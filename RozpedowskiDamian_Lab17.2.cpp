#include <iostream>
#include <cmath>
using namespace std;

int useRecursion(int x){
      if (x < 100 ){
        return abs((x / 10) + (x % 10));
    }
    
    return useRecursion(x / 10);
    
}


int main() {
    int x;
    cout << useRecursion(567982) << endl; 

    cout << useRecursion(107982) << endl; 

    cout << useRecursion(7) << endl;
    
    cout << "Your turn, Give me an int: ";
    cin >> x;
    cout << useRecursion(x) << endl;
    
    return 0;
}