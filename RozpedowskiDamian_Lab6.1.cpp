#include <iostream>
using namespace std;
int main() {

   int num;
 
     cout << "Give me a number" << endl;
     cin >> num;
     cout << "Your number in binary is..." <<endl;
       
        // If num is negative display error and let user input new num
       while (num < 0){
           cout << "Error, Use a positive integer" << endl;
            cout << "Give me a number" << endl;
            cin >> num;
           
       }
       
    // While the num is not = to 0, run the following
   while (num != 0) {
       
  // if the number is greater than 0 display mod 2 of the number and replace num by num/2
       if (num > 0) {

           cout << num % 2 << endl;
           num = num / 2;

       }
   }
   
    return 0;
}

