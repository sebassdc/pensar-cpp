#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {
  string s, enter;
  ifstream in("lineToLine.cpp");

  while(getline(in, s)) {
    cout << s;
    enter = getchar();
  }
}
