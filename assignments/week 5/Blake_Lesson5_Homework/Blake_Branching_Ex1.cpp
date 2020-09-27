#include <iostream>
#include <string>
using namespace std;

int main(){

  int inputA, inputB, factor;

  cout << "Please enter two integers separated by a space." << endl;
  cin >> inputA >> inputB;
  cout << "Please enter a possible factor" << endl;
  cin >> factor;

  if ((inputA % factor == 0) && (inputB % factor == 0)){
    cout << factor << " is a common factor of " << inputA << " and " << inputB << endl;
  }
  else {
    cout << factor << " is not a common factor of " << inputA << " and " << inputB << endl;
  }

  return 0;
}
