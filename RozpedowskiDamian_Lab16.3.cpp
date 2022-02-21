#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void sort(int &a, int &b, int &c){
    if (a<b){
        swap(a,b);
    }
    if(b<c){
        swap(b,c);
    }
    if (a<b){
        swap(a,b);
    }
    
}

int main() {

    int a = 2, b = 7, c = 1;

    sort(a, b, c);

    cout << a << b << c << endl; // prints 721


    cout << "Your turn, give me 3 integers: \n";
    cin >> a >> b >> c;
    
    sort(a, b, c);
    
     cout << a << b << c << endl;
     
     return 0;

}