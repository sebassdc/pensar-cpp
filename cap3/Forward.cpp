// Forward function & data declarations
#include <iostream>
using namespace std;

// This is not actually external, but the
// compiler must ve told it exist somewhere:
extern int i;
extern void func();
int main() {
  i = 0;
  func();
}
int i; // The data definition
void func() {
  i++;
  cout << i;
}
