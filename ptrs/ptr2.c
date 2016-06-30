#include <stdio.h>

int main() {
	int x = 5;
	int y = 10;
	int *pa = &x;
	int *pb = &y;

	pa = pb;

	x = 6;
	y = 15;

	printf("*pa=%d\t*pb=%d\n", *pa, *pb);
	return 0;
}
