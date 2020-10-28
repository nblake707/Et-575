#include <iostream>
using namespace std;

int calcGcd(int a, int b){
  int gcd = 1;

  for(int i = 1; i < a * b; i++){
    if ((a % i == 0) && (b % i == 0)){
      gcd = i;
    }
  }
  return gcd;
}

int main(){

  int a, b;

  cout << "Please enter two integers." << endl;
  cin >> a >> b;
  cout << "The GDC of " << a << " and " << b << " is: " << calcGcd(a,b) << endl;

  return 0;
}
