#include<iostream>
using namespace std;

int main (){
    
int r = 0, num[100];
cout << "Enter a positive integer\n";
cin >> r;

if (r <= 100){
cout << "Enter " << r << " intergers" << endl;

for (int i = 0; i < r; i++){
cin >> num[i]; //asks for r amount of values
 
}

for (int l = 0; l < r; l++){
    for (int w = 0; w < num[l]; w++){
    cout << "*";
    }
    cout << endl;
 }
}
return 0;
}
