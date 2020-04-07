#include <inttypes.h>
int main()
{
	int[] array = new int[3];
	int a;
	a = 2;

	array[0] = a;
	array[1] = 6;

	array[2] = a + 6;

	a = array[2];

	return a;
}
