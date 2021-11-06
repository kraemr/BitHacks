

int is_nth_bit_set(int x,int n)
{
if(x & (1<<n)) {
  return 1;
}
else {
return 0;
}
}
