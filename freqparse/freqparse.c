#include <stdio.h>
int main() {
  int nlower = 0;
  int ndigit = 0;
  int nother = 0;
  int ntotal = 0;
  char c;

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9')
      ndigit++;
    else if (c >= 'a' && c <= 'z')
      nlower++;
    else if (!(c == ' ' || c == '\t' || c == '\n'))
      nother++;
  }
  ntotal = ndigit + nlower + nother;

  printf("\tDigits\tLower\tOther\n");
  printf("\t%d\t%d\t%d\n", ndigit, nlower, nother);
  printf("\t%3.1f\t%3.1f\t%3.1f\n",
    100.0 * ndigit / ntotal,
    100.0 * nlower / ntotal,
    100.0 * nother / ntotal);
  return 0;
}
