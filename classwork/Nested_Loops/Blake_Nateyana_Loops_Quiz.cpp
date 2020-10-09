#include <iostream>
using namespace std;

int main(){

  int n = 0;
  int sum = 0;

  cout << "Please enter an integer" << endl;
  cin >> n;

  for (int i = 0; i <= n; i++){
    sum = sum + i;
  }

  cout << "sum = " << sum << endl;


  return 0;
}
