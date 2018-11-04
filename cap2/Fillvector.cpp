// Copy an entire file into a vector string
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
  vector<string> v;
  ifstream in("Fillvector.cpp");
  string line;

  while (getline(in, line))
    v.push_back(line); // Add line to the end

  for (int i = 0; i < v.size(); i++) // Add numeration
    cout << i << ": " << v[i] << endl;
}
