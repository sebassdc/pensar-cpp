// The guess program using do-while
#include <iostream>
using namespace std;

int main() {
  int secret = 15;
  int guess; // No initialization needed here
  do {
    cout << "guess the number: ";
    cin >> guess; // initialization happens
  } while (guess != secret);
  cout << "You got it!" << endl;
}
