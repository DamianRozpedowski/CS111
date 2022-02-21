#include <iostream>
using namespace std;
int main() {
    
int start = 28;
int end = 387;

//will run until 28 gets to 387
for (int n=1; start <=end; n++){
    //will keep increasing num by 1 and display it
  cout << start << " "; 
  start++;
  
  //everytime the num is repeated 10 times reset n counter so that it can continue to create a new line
   if (n == 10){
       cout <<endl;
       n = 0;
   } 
}
    return 0;
}