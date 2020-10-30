#include <iostream>
using namespace std;

// write recursive function to print all summations from n to 1
void printSummation(int n){
  int sum = 0;

  if(n == 1){
    cout << 1 << endl;
    return;
  }

    for(int i = 1; i <= n; i++){
      sum = sum + i;
    }

    cout << sum << endl;
    printSummation(n - 1);

}

int main(){

  int input = 0;
  cout << "Please enter an integer";
  cin >> input;

   printSummation(input);

  return 0;
}
