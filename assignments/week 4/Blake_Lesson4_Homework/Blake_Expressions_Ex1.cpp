#include <iostream>
#include <string>
using namespace std;

int factorNum (int num, int a){
  if(num % a == 0){
    return 1;
  }
  else {
    return 0;
  }
}

int main(){

  int input;
  int ones;
  int tens;
  int hundreds;

  cout << "Please enter a 3-digit integer." << endl;
  cin >> input;
  ones = input % 10;
  int one_f = factorNum(input,ones);

  int n = (input/10);
  tens = n % 10;
  int tens_f = factorNum(input,tens);

  n = (n/10);
  hundreds = (n % 10);
  int hundreds_f = factorNum(input,hundreds);


  cout << "Is " << ones << " a factor of " << input << "? " << one_f << endl;
  cout << "Is " << tens << " a factor of " << input << "? " << tens_f << endl;
  cout << "Is " << hundreds << " a factor of " << input << "? " << hundreds_f << endl;


  return 0;
}
