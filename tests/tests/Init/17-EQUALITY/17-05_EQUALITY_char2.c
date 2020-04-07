#include <inttypes.h>
int main()
{
	char a;
	char b;
	a='r';
	b='m';
	if (a == b) {
		a = 'p';
	}
	if (a != b) {
		a = 'a';
	}
	return a;
}
