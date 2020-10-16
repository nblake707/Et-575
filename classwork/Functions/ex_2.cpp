#include <iostream>
using namespace std;

void square(int n){
  int product = n * n;
  cout << product << endl;
}

int main(){

  int input;

  cout << "Please enter an integer" << endl;
  cin >> input;

  square(input);


  return 0;
}
