#include <iostream>
using namespace std;

int main(){

  int n = 0;

  cout << "please enter an integer" << endl;
  cin >> n;

  for(int i = 1; i <= n; i++){
    for(int j = 0; j < i; j++){
      //check to see if row is a factor of n
      if(n % i == 0){
        cout << "x ";
      }else {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
