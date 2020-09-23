#include <iostream>
#include <string>
using namespace std;

int main(){

  int input;

  cout << "Please enter an integer." << endl;
  cin >> input;

  if(input <= 0){
    cout << "x is not valid" << endl;
  }

  if(input >= 0){
    if (18 % input == 0){
      cout << "is a factor of 18" << endl;
    }
    else cout << "is not a factor of 18" << endl;

  }

  return 0;
}
