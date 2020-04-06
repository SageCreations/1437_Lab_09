#include <iostream>
#include "orderedArrayListType.hpp"
#include "arrayListType.hpp"


using namespace std;

int main() {
  arrayListType *listPtr;
  orderedArrayListType intListObj(25);

  int number;

  cout << "List 8: Enter 8 integers: ";

  for (int count = 0; count < 8; count++) {
    cin >> number;
    intListObj.insert(number);
  }

  listPtr = &intListObj;

  cout << endl;
  cout << "Line 16: intList: ";
  listPtr->print();
  cout << endl;

  cout << "Line 18: Enter the number to be deleted: ";
  cin >> number;
  cout << endl;

  listPtr->remove(number);

  cout << "Line 22: After removing " << number << " intList: ";
  listPtr->print();
  cout << endl;

  cout << "Line 25: Enter the search item: ";
  cin >> number;
  cout << endl;

  if (listPtr->seqSearch(number) != -1)
    cout << "Line 29: " << number << " found in intList." << endl;
  else
    cout << "Line 31: " << number << " is not in intList." << endl;

  return 0;
}
