#include <iostream>
using namespace std;

int multiply(int a, int b) {
  if (a == 0 || b == 0) {
    return 0; // if either value is 0, product = to 0
  }
  else {
    return a + multiply(a, b-1);
  }
}

int main() {
    
  int a, b, p;
  cout << "Enter two integer values to multiply: \n";
  cin >> a >> b; //allows the user to multiply 2 values of choice, like a calculator
  p = multiply(a, b);
  cout << a << " * " << b << " is " << p;
  
  return 0;
}