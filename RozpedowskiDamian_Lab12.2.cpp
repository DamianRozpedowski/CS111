#include <iostream>
#include <ctime>
using namespace std;

int main() {
    
    //makes a new seed so that random numbers will be random everytime
    srand(time(0));
    
    int randnum;
    int userinp;
    int guessamount=0;
    
    randnum= rand()%100+1;
    
    cout << "Guess the number\n";
    cin >> userinp;
    
    while (userinp != randnum){
        if (userinp < randnum){
            cout << "Too small\n";
        }
        else if (userinp > randnum){
            cout << "Too big\n";
        }
        
        cin >> userinp;
        guessamount++;
    }
    
    //add one to guessamount so that it accounts for the last guess
    
    cout << "Congratulations! You took " << guessamount+1 << " guesses";
 
    return 0;
}