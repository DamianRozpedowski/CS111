#include <iostream>
using namespace std;
int main() {

// two variables declared, one to keep the total value and one for the user to input new values
int total=0;
int newitem;
cout << "Enter the price of an item:" << endl;
cin >> newitem;

//as long as the user does not input 0 this while loop continues to add user input into the total value
while (newitem != 0){
    
    total = total + newitem;
    cout << "Enter the price of an item:" << endl;
    cin >> newitem;
    
}

cout << "Your total is $" << total <<endl;

// if the total is above 100 prints that it's expensive
if (total > 100){
    cout <<"Thats expensive!" << endl;;
}

    return 0;
}