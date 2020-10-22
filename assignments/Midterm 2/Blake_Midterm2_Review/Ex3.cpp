#include <iostream>
using namespace std;

int main(){

char x;

for(int i = 65; i <= 90; i++){
  // must cast the int to a char
  x = static_cast<char>(i);
  cout << x << " ";
}

  return 0;
}
