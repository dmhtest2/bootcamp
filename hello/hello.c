#include <stdio.h>
int main(){
	int value = 33;
	int i;
	float floatval = (float) value;
	float pi = -3.1415926;
	int intpi = (int) pi;
	short strshort;
	char tinystr[] = "X";
	strshort = (short) (*tinystr);
	printf("Pi as int=%d.\n", intpi);
	printf("Str as short = %d.\n", strshort);
	printf("Int as float = %f.\n", floatval);
	printf("Hello, world! Again.\n");
	printf("The false result is: %d\n", (55==50));
	printf("The true result is: %d\n", (55==55));
	for (value = 0; value < 10; value++) {
		printf("Value = %d\n", value);
	}

	i = 0;
	for (
		printf("Hello!\n");
		i < 10;
		printf("You're awesome!\n")
	) i++;

	for (i=0; i<10; i++) {
		i *= 2;
		printf("i=%d\n", i);
	}
	switch (i) {
		case 15:
			printf("i is 15\n");
			i=3;
			break;
		case 2:
		case 3:
			printf("We are in cases 2 and 3.\n");
			break;
		default:
			printf("i has some other value.\n");
			break;
	}
	return 0;
}
