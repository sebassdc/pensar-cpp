#include <iostream>
#include <sstream>
#include <string>
using namespace std;

struct Struct2 {
  int onlylonelyone;
  void set(int n);
  string get();
};

void Struct2::set(int n) {
  this->onlylonelyone = n;
}

string Struct2::get() {
  return static_cast<std::ostringstream*>(&(std::ostringstream() << this->onlylonelyone))->str();
}

int main() {
  Struct2 suject1;
  suject1.set(2);
  cout << suject1.get() << endl;
}
