#include <iostream>
using namespace std;

int main() {

  int a[2][2] = {
    {1, 2},
    {3, 4}
  };

  int b[2][2] = {
    {5, 6},
    {7, 8}
  };

  int c[2][2] = {
    {0, 0},
    {0, 0}
  };

  int l = 2;

  for (int i = 0; i < l; i++) {
    for (int j = 0; j < l; j++) {
      for (int k = 0; k < l; k++) {
        cout << i << j << endl;
        cout << a[i][k] * b[k][j];
        c[i][j] += a[i][k] * b[k][j];
      } 
    }
  }

  for (int i = 0; i < l; i++) {
    for (int j = 0; j < l; j++) {
      cout << "C{" << i << ", " << j << "}: " << c[i][j] << endl;
    }
  }
}
