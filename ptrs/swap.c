#include <stdio.h>

void swap(int x, int y) {
	int temp;

	temp = x;
	x = y;
	y = temp;
}

int main() {
	int a = 5;
	int b = 10;

	printf("a=%d, b=%d\n", a, b);

	swap(a, b);	

	printf("a=%d, b=%d\n", a, b);

	return 0;
}
