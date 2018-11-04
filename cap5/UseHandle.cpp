// Use the Handle class
#include "Handle.h"
#include <iostream>

int main() {
  Handle u;
  u.initialize();
  std::cout << u.read() << std::endl;
  u.change(1);
  std::cout << u.read() << std::endl;
  u.cleanup();
}
