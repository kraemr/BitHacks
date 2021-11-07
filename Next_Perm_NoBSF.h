
//Next lexicographic permutation BitHack
int nextnumpermutation_noBSF(unsigned int num) //WITHOUT BSF NEEDED
{
unsigned int t = (num | (num-1))+1;
return t | ((((t & -(int)t) / (num & -(int)num)) >> 1) -1); //returns the next permutation of a bitstring 
}
