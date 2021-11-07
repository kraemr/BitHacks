

int ispow2(unsigned int v)
{
int f;
f = v && !(v  & (v - 1)); 
return f; // if it returns 1 then it is a power of 2 
}
