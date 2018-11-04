// Copy an entire file into a vector string
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
  vector<string> v;
  ifstream in("Fillvector2.cpp");
  string line, s;

  while (getline(in, line))
    v.push_back(line); // Add line to the end

  for (int i = 0; i < v.size(); i++) // Add numeration
    s += v[i] + "\n";
  cout << s;
}
