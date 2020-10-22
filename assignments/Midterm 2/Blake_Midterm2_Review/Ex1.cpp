#include <iostream>
using namespace std;

int main(){

  int input = 0;

do{
  cout << "Enter an odd number between 5 and 11 inclusive." << endl;
  cin >> input;
}while((input > 5 || input < 11) && (input % 2 == 0));

  return 0;
}
