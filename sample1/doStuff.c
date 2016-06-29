#include "sample.h"

int doStuff(int arg1, int arg2) {
  int x = 1;
  int y = 2;
  int z = 3;

  printf("In doStuff.  x = %d, y = %d, z = %d,", x, y, z);
  printf("arg1 = %d, arg2 = %d\n", arg1, arg2);

  arg1++;
  arg2++;
  return 100*arg1 + arg2;
}
