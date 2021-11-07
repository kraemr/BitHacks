#include "BSF.h"
int nextnumpermutation(unsigned int num) 
{
unsigned int t = num | (num -1 );
return num = (t+1) | ((~t&-(~t))-1)>>(BSF(num)+1);
}

