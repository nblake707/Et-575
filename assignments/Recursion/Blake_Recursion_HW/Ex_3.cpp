#include <iostream>
using namespace std;


int recurse(int a , int b){
  int rem;
  rem = a % b;

  if(a % b < 0){
    cout << rem << endl;
    return rem;
  }

  cout << a << " " << b << endl;

  return recurse(b,rem);

}

int main(){

int a,b;

cout << "Please enter two integers";
cin >> a >> b;
recurse(a,b);


return 0;
}
