#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  string n;
  int num_words = 0;
  ifstream in("countWords.cpp");

  while(in >> n) {
    num_words += 1;
    cout << num_words << endl;
  }
  cout << "El numero de palabras es: " << num_words << endl;
}
