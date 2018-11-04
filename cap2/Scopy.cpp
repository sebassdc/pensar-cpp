// Copy one file to another, a line at time
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream in("Scopy.cpp"); // Open for reading
  ofstream out("Scopy2.cpp"); // Open for writing
  string s;
  while(getline(in, s)) { // Discards newline char
    out << s << "\n"; // ... must add it back
    cout << s << "\n";
  }
}
