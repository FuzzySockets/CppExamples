#include <iostream>

int main() {

  char testChar = 'a';
  short testShort = 123;
  unsigned short unsignedShort = -123;
  int testInt = 123;
  unsigned int unsignedInt = 123;
  long testLong = 123;
  unsigned long unsignedLong = 123;
  long long testLongLong = 123;
  unsigned long long unsignedLongLong = 123;
  float testFloat = 1.0;
  unsigned unsignedFloat = 1.0;
  double testDouble = 1.0;
  long double testLongDouble = 1.0;
  bool testBool = true;

  std::cout << "Size of testChar:\t" << sizeof(testChar) << std::endl;
  std::cout << "Size of testShort:\t" << sizeof(testShort) << std::endl;
  std::cout << "Size of unsignedShort:\t" << sizeof(unsignedShort) << std::endl;
  std::cout << "Size of testInt:\t" << sizeof(testInt) << std::endl;
  std::cout << "Size of unsignedInt:\t" << sizeof(unsignedInt) << std::endl;
  std::cout << "Size of testLong:\t" << sizeof(testLong) << std::endl;
  std::cout << "Size of unsignedLong:\t" << sizeof(unsignedLong) << std::endl;
  std::cout << "Size of testLongLong:\t" << sizeof(testLongLong) << std::endl;
  std::cout << "Size of unsignedLongL:\t" << sizeof(unsignedLongLong) << std::endl;
  std::cout << "Size of testFloat:\t" << sizeof(testFloat) << std::endl;
  std::cout << "Size of unsignedFloat:\t" << sizeof(unsignedFloat) << std::endl;
  std::cout << "Size of testDouble:\t" << sizeof(testDouble) << std::endl;
  std::cout << "Size of testLongDou:\t" << sizeof(testLongDouble) << std::endl;
  std::cout << "Size of testBool:\t" << sizeof(testBool) << std::endl;
}
