#include <iostream>
#include <time.h>
using namespace std;

// x = rand() % numvalues + startvalue
//
// numvalues = endingvalue - startvalue + 1;
//
//                 99     - 10   +1 = 90

int main(){

  const int D1 = 4;
  const int D2 = 5;
  int random = 0;
  int choice = 0;
  srand(time(NULL));

  int a[D1][D2] {};

  for(int i = 0; i < D1; i++){
    for(int j = 0; j < D2; j++){

        a[i][j] = rand() % 90 + 10;
        cout << a[i][j] << " ";
    }
        cout << endl;
  }

  cout << "Please choose a column";
  cin >> choice;


  for(int i = 0; i < D1; i++){
    for(int j = 0; j < D2; j++){
      if (j == choice){
        cout << a[i][j] << " ";
      }
    }
        cout << endl;
  }

  return 0;
}
