#include <iostream>
#include "orderedArrayListType.h"

using namespace std;

int main() {
  orderedArrayListType intList(25);

  int number;

  cout << "List 8: Enter 8 integers: ";

  for (int count = 0; count < 8; count++) {
    cin >> number;
    intList.insert(number);
  }

  cout << endl;
  cout << "Line 16: intList: ";
  intList.print();
  cout << endl;

  cout << "Line 18: Enter the number to be deleted: ";
  cin >> number;
  cout << endl;

  intList.remove(number);

  cout << "Line 22: After removing " << number << " intList: ";
  intList.print();
  cout << endl;

  cout << "Line 25: Enter the search item: ";
  cin >> number;
  cout << endl;

  if (intList.seqSearch(number) != -1)
    cout << "Line 29: " << number << " found in intList." << endl;
  else
    cout << "Line 31: " << number << " is not in intList." << endl;

  return 0;
}
