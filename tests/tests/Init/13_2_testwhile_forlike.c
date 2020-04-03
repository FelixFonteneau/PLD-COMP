#include <inttypes.h>
int main()
{
	int a, s;
	a = 0;
	s = 0;

	while (a < 100) {
		s = s + a;
		a = a + 1;
	}

	return s;
}
