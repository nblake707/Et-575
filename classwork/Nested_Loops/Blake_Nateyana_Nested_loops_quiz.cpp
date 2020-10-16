#include <iostream>
using namespace std;

int main (){

int DIM = 5;

for(int i = 0; i < DIM; i++){
  for(int j = 0; j < DIM; j++){
    if((i > 0 && i < 4) && (j > 0 && j < 4)){
      cout << "-";
    }
    else{
      cout << "*";
    }
  }
  cout << endl;
}

  return 0;
}
