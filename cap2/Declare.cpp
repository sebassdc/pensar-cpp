//: C02:Declare.cpp
// Declaration & definition examples

extern int i; // Declaration without a definition
extern float f(float); //Function Declaration

float b; // Declaration & definition
float f(float a) { // Definition
  return a + 1.0;
}

int i; // Definition
int h(int x) {
  return x + 1;
}

int main() {
  b = 1.0;
  i = 2;
  f(b);
  h(i);
} ///:~
