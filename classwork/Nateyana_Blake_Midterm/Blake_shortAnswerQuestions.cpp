#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <iomanip>
using namespace std;


int main(){

// #1
  string s = "Introduction to C++";
  string plus = s.substr(16,3);
  cout << plus << endl;

// #2
  string greeting = "Introduction to c++";
  char c = greeting[16];
  int z = static_cast<int>(c) - 32;
  char C = static_cast<char>(z);
  greeting[16] = C;

  cout << greeting << endl;

// #3
   float a=13, b=3, c = 10;
   float answer_1 = 0;
   int answer_2 = 0;

   answer_1 = ((a/b)+c);
   cout << answer_1 << endl;

   answer_2 = ((static_cast<int>(a)/static_cast<int>(b))+static_cast<int>(c));
   cout << answer_2 << endl;

 // #4
   int randomNum = 0;
   srand(time(0));

   randomNum = (rand() % (110 - 100))+ 100;
   cout << randomNum << endl;

// #5
   int n = 5623;

   int last = n % 100;
   n = n / 100;
   int first = n % 100;
   cout << first << "  " << last << endl;

// #6
   cout << left << setw(20) << "Name" << setw(20) << "Years President" << endl;
   cout << left << setw(20) << "Abraham Lincoln" << setw(20) << "1860-1865" << endl;
   cout << left << setw(20) << "Thomas Jefferson" << setw(20) << "1801-1809" << endl;

// #7
   string str1 = "Four Score and Seven Years Ago";

   if(str1.length() > 10){
     cout << "String Length > 10" << endl;
   }
   else if (str1.length() < 10){
     cout << "String Length < 10" << endl;
   }
   else if (str1.length() == 10){
     cout << "String Length = 10" << endl;
   }

   string str2 = "Good Day";

   if(str2.length() > 10){
     cout << "String Length > 10" << endl;
   }
   else if (str2.length() < 10){
     cout << "String Length < 10" << endl;
   }
   else if (str2.length() == 10){
     cout << "String Le)ngth = 10" << endl;
   }

   string str3 = "0123456789";

   if(str3.length() > 10){
     cout << "String Length > 10" << endl;
   }
   else if (str3.length() < 10){
     cout << "String Length < 10" << endl;
   }
   else if (str3.length() == 10){
     cout << "String Length = 10" << endl;
   }

  return 0;
}
