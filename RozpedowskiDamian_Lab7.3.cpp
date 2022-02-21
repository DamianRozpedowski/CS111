#include <iostream>
using namespace std;
int main() {

    int inp;
    int even=0;
    int odd=0;
    
    
    cout << "Enter a number between 1 and 100\n";
    cin >> inp;
    
    
    //Makes sure user enters num between 1-100
    while (inp <= 0 || inp > 100){
    cout << "Error\nEnter a number between 1 and 100\n";
    cin >> inp; 
    }
    
    
    //Runs until user enters 0
    while (inp != 0){
     //Determines if num is even or odd 
     if (inp%2 == 0){
         even++;
     }  
     else if (inp%2 == 1){
         odd++;
     }
     cout << "Enter a number\n";
     cin >>inp;
    }
    
    
    //Displays how many even and odd numbers were inputted
    cout << "Even Integers: " << even <<endl;
    cout << "Odd Integers: " << odd <<endl;

    return 0;
}