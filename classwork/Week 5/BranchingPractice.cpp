#include <iostream>
#include <string>
using namespace std;

int main (){

int input = 0;
bool a;

cout << "Please enter an integer." << endl;
cin >> input;
if(input % 2 == 0){
  a = true;
  cout << a << endl;
}
else {
  a = false;
  cout << a << endl;
}

  return 0;
}
