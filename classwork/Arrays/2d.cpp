#include <iostream>
using namespace std;

int main(){

  const int D1 = 4;
  const int D2 = 5;
  int values = 10;

  int a[D1][D2] {};

  for(int i = 0; i < D1; i++){
    for (int j = 0; j < D2; j++){
      a[i][j] = values;
      cout << a[i][j] << " ";
      values = values + 1;
    }
    cout << endl;

  }

  return 0;
}
