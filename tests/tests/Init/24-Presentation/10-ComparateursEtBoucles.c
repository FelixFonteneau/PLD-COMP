#include <inttypes.h>
int main()
{
	int a;
	int b;
	int c;

	a=17;
	b=42;

  if(a == 17){
    b = 5;
  }

	if (a > b) {
		a = -5;
	} else if (a!=0) {
		b = a;
	}

	if (a > b) {
		c = 1;
	} else if (a < b) {
		c = -1;
	} else {
		c = 65;
	}

  while(b > 0){
    c = c+1;
    b = b-1;
  }

	return c;
}
