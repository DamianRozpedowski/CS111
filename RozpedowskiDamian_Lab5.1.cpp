#include <iostream>
using namespace std;
int main() {

int windspeed;
cout << "Enter the Hurricane's Wind Speed" << endl;
cin >> windspeed;

// Determines Hurricane Category
if (windspeed >= 74 && windspeed <= 95 ){
cout << "Category 1 Hurricane" << endl;
}

else if (windspeed >= 96 && windspeed <= 110) {
cout << "Category 2 Hurricane" << endl;
}

else if (windspeed >= 111 && windspeed <= 130 ) {
cout << "Category 3 Hurricane" << endl;
}

else if (windspeed >= 131 && windspeed <= 155) {
cout << "Category 4 Hurricane" << endl;
}

else if (windspeed > 155) {
cout << "Category 5 Hurricane" << endl;
}

else {
cout << "The Hurricane isn't strong enough" << endl;
}
	

return 0;
}
