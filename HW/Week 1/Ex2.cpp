#include <iostream>
#include <iomanip>
using namespace std;


int main() {

cout << "Shopping Cart\n";
cout << "-------------------------------\n";
cout << left << setw(4) << "#" << setw(20) << "Item" << setw(5) << "Cost\n" << endl;
cout << left << setw(4) << "1" << setw(20) << "Chalupa" << setw(5) << "$1.50" << endl;
cout << left << setw(4) << "2" << setw(20) << "Soft Taco Supreme" << setw(5) << "$1.00" << endl;
cout << left << setw(4) << "1" << setw(20) << "Meximelt" << setw(5) << "$2.50\n" << endl;
cout << left << setw(4) << "" << setw(20) << "Subtotal:" << setw(5) << "$5.00" << endl;
  return 0;
}
