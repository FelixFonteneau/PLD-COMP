#include <inttypes.h>
int main() {
	int a = 42;
	int c = 100;
	a = c;
	int d = a + c;
	a = d;
	return a;
}
