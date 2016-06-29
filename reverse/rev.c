#include <stdio.h>

int get1line(char s[], int lim) {
  int c, i;
  for (i=0; i<lim-1 && (c=getchar())!=EOF && c!= '\n'; ++i)
    s[i] = c;
/*
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
*/
  s[i] = '\0';
  return i;
}

int main() {
  char line[1000];
  int length;
  length = get1line(line, 1000);
  printf("%c\n", line[length-1]);
  printf("%d:%s", length, line);
  return 0;
}
