#include <iostream>
using namespace std;

void printI(int &i) {
  cout << "Printing i: " << i << endl;
}

int main() {

  // defining a basic 10 integer array
  int x[10];
  int xLen = sizeof(x) / sizeof(x[0]);

  for (int i = 0; i < xLen; i++) {
    cout << x[i] << endl;
  }

  // defining an array in place
  float v[] = {1.1, 2.2, 3.3};
  int vLen = sizeof(v) / sizeof(v[0]);

  for (int i = 0; i < vLen; i++ ) {
    cout << v[i] << endl;
  }

  // multidimensional array
  float ab[3][3];
  int abLen = sizeof(ab) / sizeof(ab[0]);

  for (int i = 0; i < abLen; i++) {
    printI(i);
    for (int j = 0; j < abLen; j++) {
      cout << "Element: " << i << ", " << j << ": " << ab[i][j] << endl;
    }
  }

  // array allocated at runtime
  int someUserDefinedSize = 3;
  float* rta = new float[someUserDefinedSize]; // pointer dynamically allocates memory at runtime
  delete[] rta; // but programmer must clean up the memory afterwards

  // basic pointer usage
  int i = 3;
  int *j = &i; // store address of i @ "j"
  int k = *j; // dereference address stored @ "j"

  // initializing a nullptr
  // valid in c++ 11 and beyond
  int *nullPointer = nullptr;
  int *nullPointerSynonymous{}; // also sets a nullptr

}
