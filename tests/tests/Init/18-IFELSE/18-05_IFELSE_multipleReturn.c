#include <inttypes.h>
int main()
{
	int a;
	int b;
	a=17;
	b=42;
	if (a > b) {
		a = b;
		return a;
	} else {
		b = a;
		return b;
	}
}
