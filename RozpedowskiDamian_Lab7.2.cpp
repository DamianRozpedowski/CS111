#include <iostream>
using namespace std;
int main() {

   int num;
   int rem;
   int total=0;
   cout <<"Give me a positive integer\n";
   cin >> num;
   
   //requires user to input a positive integer
   while (num <= 0){
     cout <<"Error\n";
     cout <<"Give me a positive integer\n";
     cin >> num;
   }
   
   //runs until num is not equal to 0, when num is divided by 10 and there is 1 digit left program ends
   while (num != 0){
     //takes the remainder and stores it if its odd, then divides the num given by 10 to remove 1 digit 
    rem = num%10;
    num = num/10;
       if (rem%2 != 0){
          total = total + rem;
       }
   }
   
   //displays the total of odd digits when added
    cout << "The sum of the odd digits is " << total <<endl;
   
   
    return 0;
}