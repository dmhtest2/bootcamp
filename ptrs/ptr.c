#include <stdio.h>

int main() {
	int x = 5;
	int *ptrToInt;
	ptrToInt = &x;
	printf("PtrToInt = %x\n", (unsigned int) ptrToInt);
	printf("PtrToInt dereference = %d\n", *ptrToInt);

	x += 100;
	printf("PtrToInt = %x\n", (unsigned int) ptrToInt);
	printf("PtrToInt dereference = %d\n", *ptrToInt);

	*ptrToInt += 50;	
	printf("PtrToInt = %x\n", (unsigned int) ptrToInt);
	printf("PtrToInt dereference = %d\n", *ptrToInt);
	return 0;
}
