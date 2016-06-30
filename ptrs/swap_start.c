#include <stdio.h>

void swap(ARGUMENTS HERE) {
	STATEMENTS HERE
}

int main() {
	int a = 5;
	int b = 10;

	printf("a=%d, b=%d\n", a, b);

	swap(a, b);	

	printf("a=%d, b=%d\n", a, b);

	return 0;
}
