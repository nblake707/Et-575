#include <iostream>
using namespace std;

int main(){

  int input = 0;

  do{
    cout << "Please enter an odd integer value between 10 and 20." << endl;
    cin >> input;
  }while((input < 10 && input > 20) || (input % 2 == 0));

  for(int i = 0; i < input; i++){
    for(int j = 0; j < input; j++){
      cout << "x";
    }
    cout << endl;
  }



  return 0;
}
