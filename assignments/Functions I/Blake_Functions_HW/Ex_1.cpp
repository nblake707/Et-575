#include <iostream>
using namespace std;

void printTable(int n){
  for(int i = 1; i <= n; i++){
    cout << i << " * " << n << " = " << i * n << endl;
  }
}

int main(){
  
  int n = 0;

  cout << "Please enter and integer." << endl;
  cin >> n;
  printTable(n);

  return 0;
}
