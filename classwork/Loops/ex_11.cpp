#include <iostream>
using namespace std;

int main(){

int min = 0;
int max = 0;


cout << "Please enter minimum and maximum values." << endl;
cin >> min >> max;

do{
  if(min > max){
    cout << "You entered incorrect values" << endl;
    cout << "Please enter minimum and maximum values." << endl;
    cin >> min >> max;
  }
}
 while(min >= max);

for(int i = max; i > min; i--){
  if(!(i % 2 == 0)){
    cout << i << " ";
  }
}

  return 0;
}
