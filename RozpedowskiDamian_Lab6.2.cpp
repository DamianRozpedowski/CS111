#include <iostream>
using namespace std;
int main() {

//two integers, one for input, and one to use as a factor
int num, fact=1;
cout << "Give me a number and the factors will be displayed" << endl;
cin >> num;


//while num is not positive keep asking user for input
while (num <=0){
    cout << "Give me a positive integer" << endl;
    cin >> num;
}


  cout << "The factors of "<< num << " are ";


    //factor needs to be less than or equal to the actual num
   while (fact <= num){
   
   //if the remainder or num/fact is equal to 0 that mean fact is a factor of num, displays the fact value and adds 1 to fact
    if ( (num % fact) == 0){
        cout << fact << " " ;
        fact++;
    }
    
    //otherwise add 1 to fact and continue the while loop
    else {
        fact++;
    }
    
}



    return 0;
}