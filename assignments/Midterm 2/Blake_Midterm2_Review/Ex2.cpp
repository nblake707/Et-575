#include <iostream>
using namespace std;

int main(){

  const int dimension = 7;

  for(int i = 0; i < dimension; i++){
    for(int j = 0; j < dimension; j++){
       if(i == 3 && j == 3){
        cout << "O";
      }
      else if(i == dimension - j - 1 || i == j){
        cout << "X";
      }
      else{
        cout << "*";
      }
    }
    cout << endl;
  }
  
  return 0;
}
