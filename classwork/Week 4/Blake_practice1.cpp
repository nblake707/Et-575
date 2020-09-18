#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(){

  // srand(time(null));

  int input;

  cout << "Please enter a number" << endl;
  cin >> input;
  cout << input % 5 + 30; // add () or use another variable


  return 0;
}
