

#include <limits.h>

unsigned int absolute_value(int v)
{
    unsigned int r;
    int const mask = v >> sizeof(int) * CHAR_BIT - 1;
    r = (v ^mask) - mask;
    return r; // the absoulute value
}
