#include <iostream>
using namespace std;

int main() {
    int n , array[100];
   
    cout << "Enter a positive integer that is at most 100 \n";
    cin >> n;
    
    if (n <= 100){
        cout << "Enter " << n << " integers: ";
    
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    
    for (int i = 0; i < n; ++i) {
        if (array[i] < 0)
            cout << array[i] << " ";
    }
    
    for (int i = n-1; i >= 0; --i) {
        if (array[i] >= 0)
            cout << array[i] << " ";
    }
    
    cout << endl;  
    }
  
    
    return 0;
}