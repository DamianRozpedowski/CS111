#include <iostream>
using namespace std;

bool areVeryDifferent(int x,int y){
   if( x - y > 10 || x - y < -10){
       return true;
   }
   else{
       return false;
   }
}

int main(){
   int x=4,y=10,z=-4;
    cout << "With Values x=4,y=10,z=-4\n\n";  
   if(areVeryDifferent(x,y))
       cout<<"x and y are very different"<<endl;
       
   if(areVeryDifferent(x,z))
       cout<<"x and z are very different"<<endl;
       
   if(areVeryDifferent(y,z))
       cout<<"y and z are very different"<<endl;
       
    cout << "\n\n";
    
    cout << "Your Turn, Give me 3 integers: \n";
    cin >> x >> y >> z;
    
     if(areVeryDifferent(x,y))
       cout<<"x and y are very different"<<endl;
       
     if(areVeryDifferent(x,z))
       cout<<"x and z are very different"<<endl;
       
     if(areVeryDifferent(y,z))
       cout<<"y and z are very different"<<endl;
       
   return 0;
}