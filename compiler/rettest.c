int g(int b) {
  b = 666;
  return b;
}

int fac(int a) {
  a = g(a);
  return a;
}

int main() {
  int k = 12;
  int b = fac(k);
  return 8;
}
