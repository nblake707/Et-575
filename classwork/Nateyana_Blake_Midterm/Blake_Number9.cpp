#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  int input = 0;
  int fifties = 0;
  int twenties = 0;
  int tens = 0;
  int fives = 0;
  int ones = 0;

  cout << "Please enter an integer whole dollar amount." << endl;
  cin >> input;

  fifties = input / 50;
  int n = input % 50;

  twenties = n / 20;
  n = n % 20;

  tens = n / 10;
  n = n % 10;

  fives = n / 5;
  n = n % 5;

  ones = n;

  cout << "You will need: " << endl;
  cout << left << setw(10) << fifties << setw(10) << "$50 bill(s)." << endl;
  cout << left << setw(10) << twenties << setw(10) << "$20 bill(s)." << endl;
  cout << left << setw(10) << tens << setw(10) << "$10 bill(s)." << endl;
  cout << left << setw(10) << fives << setw(10) << "$5 bill(s)." << endl;
  cout << left << setw(10) << ones << setw(10) << "$1 bill(s)." << endl;


  return 0;
}
