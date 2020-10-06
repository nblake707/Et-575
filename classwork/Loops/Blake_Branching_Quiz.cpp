#include <iostream>
using namespace std;

int main(){

  float a = 0;
  float b = 0;

  cout << "Please enter two foating point numbers:" << endl;
  cin >> a >> b;

  if(a == b){
    cout << a << " is equivalent to " << b << endl;
  }
  else if (a > b){
    cout << a << " is the larger number" << endl;
  }
  else if (b > a){
    cout << b << " is the larger number." << endl;
  }

  return 0;
}
