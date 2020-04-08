int f(int k) {
  k = 444;
  return k;
}

int main() {
  int b = 10;
  f(b);
  return 42;
}
