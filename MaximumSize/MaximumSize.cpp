#include <iostream>
using namespace std;

class MaximumSize {

  public:

    MaximumSize(const double a[], int l):
      a{a},
      l{l}
    {}

    double getMaximum() {
      
      if (max > 0) {
        return max; 
      }

      max = a[0];
      for (int i = 1; i < l; i++) {
        if (a[i] > max) {
          max = a[i];
        }    
      }

      return max;
    }

  private:

    int l;
    double max;
    const double *a;
    
};

int main() {
  const double toProcess[] = {5.5, 3.3, 6.6, 2.2, 1.1}; 
  MaximumSize m = MaximumSize(toProcess, 5);
  cout << "The maximum is: " << m.getMaximum() << endl;
}
