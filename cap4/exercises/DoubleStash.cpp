
const int increment = 100;

struct DoubleStash {
  struct Linked {
    double* storage;
    int next;
  } tail;
  int quantity;
  // Dinamycally allocated double

  // methods
  void initialize();
  void cleanup();
  int add(double* element);
  double* fetch(int index);
  int count();
  int inflate(int increase);
};

DoubleStash::initialize() {
  quantity = 0;
  next = 0;
  storage = 0;
}

int DoubleStash::add(double* element) {
  if (enxt)
  storage = element
}
