#include <string>
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){

  // #1
  string s = "Hello World";
  cout << s << endl;

  // #2
  string greeting = "Hello World";
  cout << greeting[6] << endl;

  // #3
  int a = 13;
  int b = 3;
  float quotient;

  quotient = (static_cast<float>(a)/static_cast<float>(b));
  cout << quotient << endl;

  // #4
  char c = 'K';
  int ascii = static_cast<int>(c);

  cout << ascii << endl;

  // #5
  int n;

  cout << "Please enter an integer" << endl;
  cin >> n;
  cout << (n%10) << endl;

  // #7 - generate random # from 1-25
  srand(time(0));

  // set seed to current time - important step: otherwise, rand num will have same pattern everytime.
  int random = 0;
  random = (rand() % 25) + 1;
  cout << random << endl;

  // #8

  string rangers = "New York Rangers";
  string a = rangers.append(" are the best!");
  string b = rangers.replace(9,15,"Mets");
  string c = rangers.erase(9,15);

  cout << a << "\n" << b << "\n" << c << endl;

  // #9

  int input = 0;

  cout << "Please enter an integer dollar amount." << endl;
  cin >> input;

  int numOfStamps = input / 55;
  cout << "You can purchase " <<  numOfStamps << " stamps @ 55 cents." << endl;

  int leftover = input % 55;
  cout << "You have " << leftover << " left over." << endl;



  return 0;
}
