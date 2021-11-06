#include "BSF.h"
//TODO TEST THIS CODE
int nextnumpermutation(unsigned int num) 
{
unsigned int t = num | (num -1 );
return num = (t+1) | ((~t&-(~t))-1)>>(BSF(num)+1);
}
/*
Keep in mind, that you can also use this algorrithm to find permutations of anything that is a string of bits, youll just have to utillize differently
if you are interested, thenjust look up Next lexicographic permutation on Google or smth
Have Fun
*/

