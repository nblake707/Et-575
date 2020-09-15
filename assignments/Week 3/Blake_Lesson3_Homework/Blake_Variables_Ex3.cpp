#include <iostream>
#include <string>
using namespace std;

int main(){

float a;
float b;
int sum;

cout << "Please enter a floating-point value" << endl; // outputting a message to console
cin >> a; // saving user input to a variable a
cout << "Please enter a floating-point value" << endl; // outputting a message to console
cin >> b; // saving user input to a variable b
sum = a + b; //assigning value of a + b to sum variable
cout << sum << endl; // outputting sum

return 0;
}
