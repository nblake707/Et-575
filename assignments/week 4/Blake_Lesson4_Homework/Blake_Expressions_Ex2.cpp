#include <iostream>
#include <string>
using namespace std;

int main() {

  int quarters;
  int dimes;
  int input;

  cout << "Please enter a dollar amount as an integer." << endl;
  cin >> input;
  quarters = (input/25);
  input = input % 25;
  dimes = (input/10);
  cout << "Optimal number of dimes: " << dimes << endl;

  return 0;
}
