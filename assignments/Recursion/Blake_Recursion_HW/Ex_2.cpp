#include <iostream>
using namespace std;

int factorial(int x){

  if(x == 0){
    return 1;
  }
  
  return x * factorial(x - 1);

}

int main(){

  int input = 0;

  do{
    cout << "Please enter an integer less than 10" << endl;
    cin >> input;

  }while(input > 10 || input < 0);

  cout << factorial(input) << endl;

  return 0;
}
