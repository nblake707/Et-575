#include <iostream>
using namespace std;

int main(){

  for(int i = 1; i <= 99; i++){
    if(i % 10 == 7 || (((i/10) % 10) == 7)){
      cout << i << " ";
    }
  }

  return 0;
}
