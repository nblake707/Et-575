#include <iostream>
#include <string>
using namespace std;

int main(){

  float length;
  float width;
  float area;

  cout << "What is the length of the rectangle?\n" << endl;
  cin >> length;
  cout << "What is the width of the rectangle? \n" << endl;
  cin >> width;
  area = width * length;
  cout << "The rectangle's area is: " << area << endl;

  return 0;
}
