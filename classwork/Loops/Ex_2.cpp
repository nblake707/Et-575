#include <iostream>
#include <string>
using namespace std;

int main(){

  int input;

  cout << "Please enter an integer greater than 10" << endl;
  cin >> input;

  while(input < 10){
    cout << "Please enter an integer greater than 10" << endl;
    //must change the condition to avoid infinite loop
    cin >> input;
  }

  cout << input << " is valid." << endl;


  return 0;
}
