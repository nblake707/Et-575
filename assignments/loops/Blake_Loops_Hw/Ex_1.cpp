#include <iostream>
using namespace std;

int main(){

  int input = 0;
  int sum = 0;

  do {
    cout << "Please enter an integer between 1 & 100,000 inclusive:" << endl;
    cin >> input;
  }
  while(input < 1 || input > 100000);

  int num = input;

  while (num != 0){
  // grab last digit of the input and add it to the sum
  sum = sum + (num % 10);
  // divide by 10 to cut off last digit
  num = num / 10;
  }

  cout << "The sum of all digits in " << input << " is " << sum << endl;

  return 0;
}
