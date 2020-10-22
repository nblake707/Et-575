#include <iostream>
using namespace std;

int main(){

  int columns = 10;
  int rows = 5;
  int counter = 0;

  cout << "                          columns    " << endl;

  for(int i = 0; i < rows; i++){
    for(int j = 0; j < columns; j++){
      if(counter == 0){
        cout << "Rows ";
      }
      else if (counter % 10 == 0){
        cout << (counter / 10) << "   ";
      }
      else {
        cout << counter << "   ";
      }
      counter = counter + 1;
    }
    cout << endl;
  }

  return 0;
}
