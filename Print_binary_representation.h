#include <stdio.h>
//its not a bithack, but it might be interesting to see the binary strings

void int_to_bin(int num) {
  char str[9] = {0};
  int i;
  for (i=7; i>=0; i--) {
    str[i] = (num&1)?'1':'0';
    num >>= 1;
  }
  printf("%s\n", str);
}
