#include <iostream>
using namespace std;


void recFun(int x){
  int num = 0;

  if(x == 0){
    return;
  }
    num = x % 10;
    recFun(x / 10);

    for(int i = 0; i < num; i++){
      cout << "*";
  }
    cout << endl;
}


int main(){

  int input = 0;

  do{
    cout << "Please enter an integer from 100 to 100,000" << endl;
    cin >> input;
  }while(input < 100 || input > 100000);

  recFun(input);

  return 0;
}
