#include <inttypes.h>
int main()
{
	int a,b;
	a=17;
	b=42;
	if (a == b) {
		a = 69;
	}
	if (a != b) {
		a = 0;
	}
	return a;
}
