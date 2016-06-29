#include "sample.h"

#define PI 3.1415



int main() {
  int x = 5; int y = 10; int z;
  z = doStuff(x,y);
  printf("In main. x=%d, y=%d, z=%d\n", x, y, z);
  printf("PI=%f", PI);
  return 0;
}
