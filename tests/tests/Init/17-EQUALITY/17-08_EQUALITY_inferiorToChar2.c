#include <inttypes.h>
int main()
{
	char a;
	char b;
	a='a';
	b='h';
	if (a < b) {
		a = 'v';
	}
	if (a > b) {
		a = 'm';
	}
	return a;
}
