// Simple demonstration of recursion
#include <iostream>
using namespace std;

void removeHat(char cat) {
  cout << "flag";
  for (char c = 'A'; c < cat; c++) {
    cout << "flag2";
    cout << " ";
    if (cat <= 'Z') {
      cout << "cat " << cat << endl;
      removeHat(cat + 1); // Recursive call
    }
    else cout << "VOOM!!!" << endl;
  }
}
int main() {
  cout << "maincra";
  removeHat('A');
}
