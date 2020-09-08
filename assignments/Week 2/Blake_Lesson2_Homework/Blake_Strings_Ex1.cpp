#include <iostream>
#include <string>
using namespace std;

int main (){

  string first = "Nateyana ";
  string last = "Blake";
  string name = first + last;

cout << "Name: " << name << endl;

cout << "Length: " << name.length() << endl;

cout << "Name: " << name.insert(9,"A. ") << endl;

cout << "Initals: " << name[0] << "." << name[9] << "." << name[12] << "." << endl;




}
