
int result;

int max(int x, int y)
{
result= x ^ ((x ^ y) & - (x < y));
return result;
}

int min(int x, int y)
{
result = y ^ ((x ^ y) & -(x < y));
return result;
}