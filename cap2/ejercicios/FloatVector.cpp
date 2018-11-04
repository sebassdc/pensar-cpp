#include <iostream>
#include <vector>
using namespace std;

int main() {
  float number;
  vector<float> numbers;
  int i;

  for (int i = 1; i <= 25; i++) {
    cout << "Ingrese el numero " << i << ": ";
    cin >> number;
    numbers.push_back(number);
  }
  for (i = 0; i < numbers.size(); i++) {
    cout << numbers[i] << ", ";
  }
}
