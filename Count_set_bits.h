unsigned int bit32_count_of_bits(unsigned int v)
{
    unsigned int c; // count the number of bits set in v
    for (c = 0; v; c++)
    {
    v &= v - 1; // clear the least significant bit set
    }
}

unsigned int bit64_count_of_bits(unsigned int v)
{
    unsigned int c; // count the number of bits set in v
// option 3, for at most 32-bit values in v:
c =  ((v & 0xfff) * 0x1001001001001ULL & 0x84210842108421ULL) % 0x1f;
c += (((v & 0xfff000) >> 12) * 0x1001001001001ULL & 0x84210842108421ULL) % 
     0x1f;
c += ((v >> 24) * 0x1001001001001ULL & 0x84210842108421ULL) % 0x1f;
}
