//TODO TEST THIS CODE

//Next lexicographic permutation BitHack
int nextnumpermutation_noBSF(unsigned int num) //WITHOUT BSF NEEDED
{
unsigned int t = (num | (num-1))+1;
return t | ((((t & -(int)t) / (num & -(int)num)) >> 1) -1); //returns the next permutation of a bitstring 
}
/*
Keep in mind, that you can also use this algorrithm to find permutations of anything that is a string of bits, youll just have to utillize differently
if you are interested, thenjust look up Next lexicographic permutation on Google or smth
Have Fun
*/

