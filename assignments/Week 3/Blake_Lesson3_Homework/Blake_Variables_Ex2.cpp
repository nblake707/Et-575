#include <iostream>
#include <string>
using namespace std;

int main(){

char user_input;
int i;

cout << "Please enter an uppercase letter.\n" << endl; // outputting a message to console
cin >> user_input; // saving user input to a variable
i = user_input; // Explicit casting to an int
i = i + 32; // adding 32 to convert from Uppercase to lowercase
user_input = i; // Explict casting back to char
cout << user_input; // Outputting user input variable

return 0;
}
