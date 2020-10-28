#include <iostream>
#include <string>
using namespace std;

// Q3
void calcRectangle(float length, float width){
  string shape;
  float perimeter = (length * 2) + (width * 2);
  float area = length * width;

  if (length == width){
    shape = "Square";
  }
  else {
    shape = "Rectangle";
  }
  cout << "The Perimeter is = " << perimeter << "." << endl;
  cout << "The Area is = " << area << "." << endl;
  cout << "The Polygon is a " << shape << endl;
}

// Q5
int CountVowels(string str1){
  int vowels = 0;
  int length = str1.length();

  for(int i = 0; i < length - 1; i++){
    if (str1[i] == 'a' || str1[i] == 'A'){
      vowels = vowels + 1;
    }
    else if (str1[i] == 'e' || str1[i] == 'E'){
      vowels = vowels + 1;
    }
    else if (str1[i] == 'i' || str1[i] == 'I'){
      vowels = vowels + 1;
    }
    else if (str1[i] == 'o' || str1[i] == 'O'){
      vowels = vowels + 1;
    }
    else if (str1[i] == 'u' || str1[i] == 'U'){
      vowels = vowels + 1;
    }

  }
  return vowels;
}

int main(){

  // Q1
  int month = 0, year = 0;

  do{
    cout << "Please enter a valid month and year." << endl;
    cin >> month >> year;
  }while((month < 1 || month > 12) || (year < 2000 || year > 2020));

  // Q2
  int DIM = 8;
  int count1 = 1;
  int count2 = 1;

  for(int i = 0; i < DIM; i++){
    for(int j = 0; j < DIM; j++){
      if((i == 0 && j == 0) || (i == 0 && j == 7)){
        cout << " ! ";
        }
      else if ((i == 7 && j == 0) || (i == 7 && j == 7)){
        cout << " ! ";
        }
      else if(i == 3){
        cout << " " << count1 << " ";
        count1 = count1 + 1;
      }
      else if (i == 4){
        cout << " " << count2 << " ";
        count2 = count2 + 1;
      }
      else {
        cout << " * ";
      }
    }
    cout << endl;
  }

  // Q3
  float length = 0, width = 0;

  cout << "please enter float values for length and width." << endl;
  cin >> length >> width;
  calcRectangle(length, width);

  // Q4
  for (int i = 1; i < 100; i++){
    if((i % 6 == 0) && (i % 9 == 0)){
      cout << i << " ";
    }
  }

  // Q5
  string str1;
  cout << "Enter a string" << endl;
  cin >> str1;
  cout << CountVowels(str1) << endl;



  return 0;
}
