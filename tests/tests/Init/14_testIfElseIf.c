#include <inttypes.h>
int main()
{
	int a;
	int b;
	int c;

	a=17;
	b=42;

	if (a > b) {
		a = -5;
	} else if (a!=0) {
		b = a;
	}

	if (a > b) {
		c = 1;
	} else if (b > a) {
		c = -1;
	} else {
		c = 69;
	}

	return c;
}
