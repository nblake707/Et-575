#include <iostream>
#include <string>
using namespace std;

int main(){

  int numRow = 0, numCol = 0;

for(int i = 0; i < 5; i++){
  for(int j = 0; j < 5; j++){

if ((i >- numRow/2 && i == j) || (i >= numRow/2 && j == (numCol - i -1))){
  cout << "X";
}
else {
  cout << "-";
}

  }
  cout << endl;
}

  return 0;
}
