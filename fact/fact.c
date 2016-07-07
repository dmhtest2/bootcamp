#include <stdio.h>

long factorial(int val);

int main() {
	int i;
	printf("\tValue\tFactorial\n");
	for (i = 0; i <= 20; i++) {
		printf("\t%d\t%li\n", i, factorial(i));
	}
	return 0;
}

long factorial(int val) {
	int i;
	long product = 1;

	for (i=1; i <= val; i++) {
		product *= i;
	}
	return product;
}
