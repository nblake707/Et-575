#include <iostream>
#include <string>
using namespace std;


void reverseFunc(string s, int length){


  if(length == 0){
       return;
   }

   reverseFunc(s.substr(1),s.size());
    cout << s[0];
}

int main(){

  string s;
  int length;

  cout << "Please enter a string \n" << endl;
  cin >> s;

  length = s.size();


  reverseFunc(s,length);

  return 0;
}
