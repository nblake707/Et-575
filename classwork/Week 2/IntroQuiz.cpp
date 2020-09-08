#include <iostream>
#include <string>
using namespace std;

int main(){

  string answer;

  cout << "Please type a famous quotation. \n";
  getline(cin,answer);
  cout << "\"" << answer << "\"" << endl;

  return 0;
}
