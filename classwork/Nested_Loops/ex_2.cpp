#include <iostream>
#include <string>
using namespace std;


int main(){

  char even = '-';
  char odd = '=';
  char star = '*';

  // 20 columns & 7 rows
  for(int i = 0; i < 7; i++){
    for(int j = 0; j < 20; j++){
// makes a stars & strips flag
      if (i < 4 && j < 7){
        cout << star;
      }else if (i % 2 == 0){
        cout << even;
      }else {
        cout << odd;
      }
    }
    cout << endl;
  }

  return 0;
}
