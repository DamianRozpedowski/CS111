#include <iostream>
using namespace std;

int sumCubes(int x);

int main(){
    
    int y;
    
    cout << sumCubes(1) << endl; //prints 1
    cout << sumCubes(2) << endl ; //prints 9
    cout << sumCubes(3) << endl; //prints 36
    
    cout << "Give me a number: ";
    cin >> y;
    cout << sumCubes(y) << endl;
    
}

int sumCubes(int x){
    
    if (x <= 0){
        return x;
    }
    
    return sumCubes(x - 1) + (x * x * x);
}