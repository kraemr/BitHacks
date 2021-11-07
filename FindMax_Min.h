

int max(int x, int y)
{
  int result;
result= x ^ ((x ^ y) & - (x < y));
return result;
}

int min(int x, int y)
{
  int result;
result = y ^ ((x ^ y) & -(x < y));
return result;
}
