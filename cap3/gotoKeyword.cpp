// The infamous goto is suported in C++
#include <iostream>
using namespace std;

int main() {
  long val = 0;
  for (int i = 1; i < 1000; i++) {
    for (int j = 0; i < 100; j += 10) {
      val = i * j;
      if(val > 47000)
        goto bottom; // Break will only go to the outer 'for'
    }
  }
  bottom: // a label
  cout << val  << endl;
}
