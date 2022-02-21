#include <iostream>
#include <ctime>
using namespace std;

int main() {
    
    //makes a new seed so that random numbers will be random everytime
    srand(time(0));
    
    double heads=0.00;
    double tails=0.00;
    
    
    for (int count =1; count <=10; count++){
        if (rand()%2 == 0){
            heads++;
        }
        else {
            tails++;
        }
    }
    cout << "Probability of heads given 10 tosses = " << heads/10 << endl;
    cout << "Probability of tails given 10 tosses = " << tails/10 << endl;
    
    heads =0;
    tails=0;
    cout << endl;

    for (int count =1; count <=100; count++){
        if (rand()%2 == 0){
            heads++;
        }
        else {
            tails++;
        }
    }
    cout << "Probability of heads given 100 tosses = " << heads/100 << endl;
    cout << "Probability of tails given 100 tosses = " << tails/100 << endl;
   
    heads =0;
    tails=0;
     cout << endl;
    
     for (int count =1; count <=1000; count++){
        if (rand()%2 == 0){
            heads++;
        }
        else {
            tails++;
        }
    }
    cout << "Probability of heads given 1000 tosses = " << heads/1000 << endl;
    cout << "Probability of tails given 1000 tosses = " << tails/1000 << endl;
    
    heads =0;
    tails=0;
    cout << endl;

     for (int count =1; count <=5000; count++){
        if (rand()%2 == 0){
            heads++;
        }
        else {
            tails++;
        }
    }
    cout << "Probability of heads given 5000 tosses = " << heads/5000 << endl;
    cout << "Probability of tails given 5000 tosses = " << tails/5000<< endl;


    return 0;
}