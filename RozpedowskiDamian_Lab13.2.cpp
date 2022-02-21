#include <iostream>
#include <math.h>
using namespace std;
int main() {
    
    double a,b,c,p;
    double answer;
    cout << "Please enter 3 lengths of a triangle: ";
    cin >> a >> b >> c;
    
    p = (a+b+c)/2;
    answer = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << "Area of Triangle: " << answer;
  
    return 0;
}