#include <iostream>
#include <string>
using namespace std;

int main(){

  for(int i = 11;i < 30; i++){
    if(!(i % 3 == 0)){
      cout << i << endl;
    }
  }

  return 0;
}
