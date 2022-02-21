#include <iostream>
#include <ctime>
using namespace std;
int main() {

    //makes a new seed so that random numbers will be random everytime
    srand(time(0));
    
    int dcount;    
    int randomroll;
    int oneroll=0;
    
    cout << "How many times do you want to roll the dice?\n";
    cin >> dcount;
    
    if (dcount <= 0){
        cout << "You are not playing the game";
        return 0;
    }
    
    for (int x = 1; x <=dcount; x++){
       randomroll = rand()%6+1;
       
        cout << "Roll " << x << ": " << randomroll <<endl; 
        
        if (randomroll == 1){
            oneroll++;
        }
    }
    
    cout << "Number of ones rolled: " << oneroll;
    
    return 0;
}