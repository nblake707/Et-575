#include <iostream>
#include <string>
using namespace std;

int main(){

  char input;
  int value;

  cout << "Please enter a character.\n" << endl;
  cin >> input;
  value = static_cast<int>(input);
  cout << value << endl;


  return 0;
}
