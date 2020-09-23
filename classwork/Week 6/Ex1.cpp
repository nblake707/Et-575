#include <iostream>
#include <string>
using namespace std;

int main(){
int x;

cout << "Please an integer." << endl;
cin >> x;
if((x % 3 == 0) && (x % 7 != 0)){
  cout << 1 << endl;
}
else cout << 0 << endl;


  return 0;
}
