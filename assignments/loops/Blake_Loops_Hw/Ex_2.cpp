#include <iostream>
using namespace std;

int main(){

  int input = 0;
  int count = 0;

  cout << "Please enter an integer: " << endl;
  cin >> input;

    for(int i = 1; i <= input; i++){
      if (input % i == 0){
        count = count + 1;
        cout << i << " is a factor of " << input << endl;
    }
  }

if(!(count > 2)){
  cout << input << " is a prime number." << endl;
}
  return 0;
}
