#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  string word, s;
  int word_count = 0;
  char filename[100];

  cout << "Ingresa el nombre del archivo: ";
  cin >> filename;
  ifstream in(filename);

  cout << "Ingresa la palabra a contar: ";
  cin >> word;

  while (in >> s) {
    if (s == word) {
      word_count += 1;
    }
  }

  cout << "La palabra " << word << " aparece "
    << word_count << " veces\n";
}
