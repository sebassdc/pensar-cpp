int main() {
  int i = 99;
  void* vp = &i;
  // Can't deference a void pointer:
  // *vp = 3; // Compile time error
  // Must cast back to int before deferencing:
  *((int*)vp) = 3;
}
