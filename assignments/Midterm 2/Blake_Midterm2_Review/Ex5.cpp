#include <iostream>
using namespace std;

float AreaTriangle(float base, float height){
  return (0.5 * base * height);
}

int main(){

  float base = 0, height = 0;

  cout << "Please enter values for base and height." << endl;
  cin >> base >> height;

  cout << AreaTriangle(base,height) << endl;

  return 0;
}
