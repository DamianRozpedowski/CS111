#include <iostream>
using namespace std;
int main () {
    
int score;

   cout << "Enter your numerical grade" << endl;
   cin >> score;
   
   if (score > 80) {
    cout << "A" << endl;   
   }
    else if (score >=60 && score <= 80) {
     cout << "B" << endl;   
    }
    else if (score >=50 && score <= 59) {
     cout << "C" << endl;
    }    
    else if (score >=45 && score <= 49) {
     cout << "D" << endl;
    }   
    else {
     cout << "F" << endl;
    }
 return 0;
}