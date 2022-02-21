#include <iostream>
#include <ctime>
#include <math.h>

using namespace std;
int main() {
    srand(time(0));
    int low= rand()%(200+1-50)+50;
    int high= rand()%(3000+1-700)+700;
    int holder;
    
    cout << "The perfect squares between " << low << " and " << high << " are: " << endl;
    while (low != high){
        holder = sqrt(low);
        if (holder * holder == low) {
            cout << low << endl;
        }
        low++;
    }
    
    return 0;
}