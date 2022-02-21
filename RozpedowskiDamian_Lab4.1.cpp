#include <iostream>
using namespace std;
int main () {
    
int num1,num2,num3;
cout << "Enter three numbers" <<endl;
cin >> num1 >> num2 >> num3;


if (num1 < num2 && num2 < num3)    {
   cout << "Increasing";
}       
else if (num1 > num2 && num2 > num3) {
   cout << "Decreasing";
}  
else {
 cout << "The numbers are neither increasing nor decreasing" << endl;
}       
        
        
        

 return 0;
}