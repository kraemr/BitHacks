

#include <limits.h>
unsigned int r;
int v;

unsigned int absolute_value(int v)
{
    int const mask = v >> sizeof(int) * CHAR_BIT - 1;
    r = (v ^mask) - mask;
    return r; // the absoulute value
}