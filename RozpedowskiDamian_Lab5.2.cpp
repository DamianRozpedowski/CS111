#include <iostream>
using namespace std;
int main() {

float shoecost;
float discount;

//Prompts user about shoe cost
cout << "How much do your pair of shoes cost?" << endl;
cin >> shoecost;

//Determines if shoes are able to qualify for a discount
if (shoecost >= 125) {
    cout << "You are eligable for a 10% discount" << endl;
    //Makes a new variable that stores discounted price
    discount = shoecost - (shoecost * .10);
    cout << "Your pair of shoes will cost $"  << shoecost - (shoecost * .1) << endl;
    cout << "You saved $" << shoecost - discount << endl;
}
else {
 cout << "You are not eligable for a 10% discount" << endl;
 cout << "The price will still be $" << shoecost << endl;
 cout << "You need $" << 125 - shoecost << " to qualify for a discount" << endl;
}

return 0;
}
