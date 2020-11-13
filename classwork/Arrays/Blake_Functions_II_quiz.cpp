#include <iostream>
using namespace std;

int offset(int n, int b){
  int ans = n + b;
  return ans;
}

int main(){

  int answer = offset(5,3);
  cout << answer << endl;

  return 0;
}
