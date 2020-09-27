#include <iostream>
#include <string>
using namespace std;

int main(){

  char input;
  int intChar;

  cout << "Please enter a character." << endl;
  cin >> input;
  intChar = static_cast<int>(input);

  if(intChar >= 65 && intChar <= 90){
    cout << input << " is an uppercase letter." << endl;
  }
  else if (intChar >= 97 && intChar <= 122){
    cout << input << " is a lowercase letter." << endl;
  }
  else{
    cout << input << " is neither a letter nor a number." << endl;
  }

  return 0;
}
