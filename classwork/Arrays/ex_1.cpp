#include <iostream>
using namespace std;

int main(){

  char x;
  const int size = 26;
  int letter = 65;
  char alphabet[size];

  for(int i = 0; i < size; i++){

      x = static_cast<char>(letter);
      alphabet[i] = x;
      cout << alphabet[i] << " ";
      letter = letter + 1;

  }

  return 0;
}
