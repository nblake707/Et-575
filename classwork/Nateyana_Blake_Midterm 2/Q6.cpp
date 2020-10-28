#include <iostream>
using namespace std;

int main(){

  int DIM = 5;
  int start = 100;
  int start1 = 10;

cout << "        Columns   " << endl;
  for (int i = 0; i < DIM; i++){
    for(int j = 0; j < DIM; j++){
      if((i == 0) && (j == 0)){
        cout << "Percent ";
      }
      else if(i == 0 && j > 0){
        cout << " " << start << " ";
        start = start + 100;
      }
      else if (j == 0 && i > 0){
        cout << " " << start1 << " ";
        start1 = start1 + 10;
      }
      else{
        cout << " " << (i * 100) / (j * 10) << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
