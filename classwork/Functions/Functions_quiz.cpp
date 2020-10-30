#include <iostream>
using namespace std;

double average(int a, int b, int c){
  return (a+b+c)/3;
}

int main(){

int a = 0, b = 0, c = 0;
cout << "Please enter 3 integers." << endl;
cin >> a >> b >> c;

cout << "The Average is: " << average(a,b,c) << endl;

return 0;
}
