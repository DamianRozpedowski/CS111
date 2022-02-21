#include <iostream>
using namespace std;

double quadratic(double a,double b,double c,double x){
    return (a*x*x)+(b*x)+c;
}

int main() {
    double a = 1.0, b = 2.2, c = 1.21, x = 0.1;
    
    cout << "Quadratic Equation: ax^2+bx+c\n\n";
    cout << "a = 1.0, b = 2.2, c = 1.21, x = 0.1\n";
    cout << quadratic(a, b, c, x) << endl << endl;
    
    cout << "Enter an a, b, c, and x value:\n";
    cin >> a >> b >> c >> x;
   
    
    cout << quadratic(a, b, c, x) << endl;
    
    return 0;
}