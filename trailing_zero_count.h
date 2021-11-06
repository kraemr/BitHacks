#include <limits.h>
int c;  // output: c will count v's trailing zero bits,
        // so if v is 1101000 (base 2), then c will be 3

int count_trailing_zero(unsigned int v)
{
if (v)
{
  v = (v ^ (v - 1)) >> 1;  // Set v's trailing 0s to 1s and zero rest
  for (c = 0; v; c++)
  {
    v >>= 1;
  }
}
else
{
  c = CHAR_BIT * sizeof(v);
}
return c;
}